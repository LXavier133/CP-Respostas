#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
vector<vector<int>> adj;
vector<bool> seen;
int res=0;

void dfs(int s, int t){
	seen[s]=true;
	for(auto u : adj[s]) if(!seen[u]){
		return dfs(u,t+1);
	}
	res+=t;
}
int main(){__
	int n;cin>>n;
	seen.assign(n,false);
	adj.assign(n,vector<int>());
	for(int i=0; i<n; i++){
		int a,b;cin>>a>>b;
		adj[a-1].push_back(b-1);
		adj[b-1].push_back(a-1);
	}
	for(int i=0; i<n; i++) if(!seen[i]) dfs(i,0);
	cout<<res fl;	
return 0;}

