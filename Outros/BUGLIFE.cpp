#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
bool imp=false;
vector<bool> seen;
vector<vector<int>> adj;
vector<bool> team;
void dfs(int s){
	if(seen[s] || imp) return;
	seen[s]=true;
	for(int u : adj[s]){
		if(seen[u] && team[u]==team[s]) imp=true;
		team[u]=!team[s];
		dfs(u);}}


int main(){__
int t;cin>>t;for(int cc=1;cc<=t;cc++){
	cout<<"Scenario #"<<cc<<":\n";
	int n,m;cin>>n>>m;
	adj.assign(n,vector<int>{});
	seen.assign(n,false);
	team.assign(n,false);
	imp=false;
	for(int i=0; i<m; i++){
		int a,b;cin>>a>>b;
		adj[a-1].push_back(b-1);
		adj[b-1].push_back(a-1);}
	for(int i=0; i<n; i++) if(!seen[i]) dfs(i);
	if(imp) cout<<"Suspicious bugs found!\n"; else cout<<"No suspicious bugs found!\n";}
return 0;}

