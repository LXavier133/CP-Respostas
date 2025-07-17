#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX/500
#define SS <<" "<<
typedef long long ll;
 
#define int long long
 
vector<vector<int>> adj;
vector<vector<int>> cap;
int n;
 
int flow(int src, int snk){
	int flux=0;
	
	while(true){
		vector<int> pai(n,-1);
		pai[src]=-2;
		queue<int> q;
		q.push(src);
		while(!q.empty()){
			int f = q.front();
			q.pop();
			for(auto u : adj[f]) if(pai[u] == -1 && cap[f][u]){
				pai[u]=f;
				q.push(u);
			}
		}
		if(pai[snk]==-1) break;
		int minFlow=INF;
		for(int cur=snk; cur!=src; cur=pai[cur]) minFlow=min(minFlow,cap[pai[cur]][cur]);
		for(int cur=snk; cur!=src; cur=pai[cur]){
			cap[pai[cur]][cur]-=minFlow;
			cap[cur][pai[cur]]+=minFlow;
		}
		flux+=minFlow;
	}
	return flux;
}
		
signed main(){__
	int boy,girl;cin>>boy>>girl;
	n=boy+girl+2;
	int k;cin>>k;
	adj.resize(n);
	cap.assign(n,vector<int>(n,0));
	for(int i=1; i<=boy ;i++) {
		adj[0].push_back(i);
		adj[i].push_back(0);	
		cap[0][i]=1;
	}
	for(int i=1; i<=girl;i++) {
		adj[n-1].push_back(boy+i);
		adj[boy+i].push_back(n-1);
		cap[boy+i][n-1]=1;
	}
	for(int i=0; i<k; i++){
		int a,b;cin>>a>>b;
		if(cap[a][b+boy]==0){
			adj[a].push_back(b+boy);
			adj[b+boy].push_back(a);
			cap[a][b+boy]=1;
		}
	}
	int ans=flow(0,n-1);
	cout<<ans fl;
	for(int i=1; i<=boy; i++) for(auto u: adj[i]) if(u!=0) if(cap[i][u]==0) cout<<i<<" "<<u-boy fl;
return 0;}
