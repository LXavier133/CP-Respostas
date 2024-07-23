#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
typedef long long ll;

vector<bool> seen;

void dfs(int s, vector<vector<int>> & adj, vector<int> & out){
	if(seen[s]) return;
	seen[s]=true;
	for(auto u : adj[s]) dfs(u, adj, out);
	out.push_back(s);}

int main(){__
	int n,m;cin>>n>>m;
	vector<vector<int>> adj(n);
	vector<vector<int>> adjT(n);
	seen.assign(n,false);
	for(int i=0; i<m; i++){
		int a,b;cin>>a>>b;
		adj[a-1].push_back(b-1);
		adjT[b-1].push_back(a-1);}
	vector<int> ordem;
	for(int i=0; i<n; i++) if(!seen[i]) dfs(i, adj, ordem);
	reverse(ordem.begin(), ordem.end());
	seen.assign(n,false);
	vector<int> root(n,0);
	int nSCC=0;
	for(auto s : ordem) if(!seen[s]){
		vector<int> C;
		dfs(s, adjT, C);
		int r=C[0];
		nSCC++;
		for(auto u : C) root[u]=r;}
	if(nSCC==1) cout<<"YES";
	else{
	cout<<"NO\n";
	for(int i=0;i<n; i++) for(auto u : adj[i]) if(root[i]!=root[u]){cout<<u+1<<" "<<i+1; return 0;}
	for(int i=1; i<n; i++) if(root[i]!=root[1]){cout<<1<<" "<<i+1; return 0;}}
return 0;}

