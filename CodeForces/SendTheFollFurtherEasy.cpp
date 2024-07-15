#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
typedef long long ll;
vector<bool> seen;
vector<vector<pair<int,ll>>> adj;
ll pior=-1;
void dfs(int s, ll preco){
	if(seen[s]) return;
	seen[s]=true;
	if(adj[s].size()==1 && s!=0){
		pior=max(pior,preco);
		return;}
	for(auto u: adj[s]) dfs(u.first, preco+u.second);}
int main(){__
	int n;cin>>n;
	adj.resize(n+1);
	seen.resize(n+1,false);
	for(int i=0;i<n-1;i++){
		int a,b;ll p;cin>>a>>b>>p;
		adj[a].push_back(make_pair(b,p));
		adj[b].push_back(make_pair(a,p));}
	dfs(0,0);
	cout<<pior;
return 0;}

