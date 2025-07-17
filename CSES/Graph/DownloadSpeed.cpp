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
	int m;cin>>n>>m;
	adj.resize(n);
	cap.assign(n,vector<int>(n));
	for(int i=0; i<m; i++){
		int a,b,s;cin>>a>>b>>s;
		adj[--a].push_back(--b);
		adj[b].push_back(a);
		cap[a][b]+=s;
	}
	int ans=flow(0,n-1);
	cout<<ans fl;
return 0;}

