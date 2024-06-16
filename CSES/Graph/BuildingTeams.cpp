#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
vector<bool> seen;
vector<vector<int>> adj;
vector<int> team;
bool fail=false;
void dfs(int s){
	seen[s] =true;
	for(int u : adj[s]){
		if(team[u]==team[s]){fail=true;}
		if(seen[u] || fail) continue;
		team[u]=!team[s];
		dfs(u);}}

int main(){__
	int n,m;cin>>n>>m;
	seen.resize(n,false);
	adj.resize(n);
	for(int i=0; i<m;i++){
		int a,b;cin>>a>>b;
		adj[a-1].push_back(b-1);
		adj[b-1].push_back(a-1);}
	team.resize(n,-1);
	team[0]=0;
	dfs(0);
	for(int i=0; i<n;i++){
		if(fail){cout<<"IMPOSSIBLE";return 0;}
		if(seen[i]) continue;
		team[i]=0;
		dfs(i);}
	for(int i : team) cout<<i+1<<" ";
return 0;}

