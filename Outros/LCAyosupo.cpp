#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;

int l,timer=0;
vector<int> tin,tout;
vector<vector<int>> up, adj;

void dfs(int s, int p){
	tin[s]=++timer;
	up[s][0]=p;
	for(int i=1; i<=l; i++) up[s][i]=up[up[s][i-1]][i-1];
	for(auto u : adj[s]) if(u!=p) dfs(u,s);
	tout[s]=++timer;}


bool anc(int u, int v){
	return(tin[u]<=tin[v] && tout[u]>=tout[v]);}

int lca(int u, int v){
	if(anc(u,v)) return u;
	if(anc(v,u)) return v;
	for(int i=l; i>=0; i--) if(!anc(up[u][i],v)) u=up[u][i];
	return up[u][0];}


int main(){
	int n,q;cin>>n>>q;
	adj.resize(n);
	tin.resize(n);
	tout.resize(n);
	l=ceil(log2(n));
	up.assign(n,vector<int>(l+1));
	for(int i=0; i<n-1; i++){
		int a;cin>>a;
		adj[i+1].push_back(a);
		adj[a].push_back(i+1);}
	dfs(0,0);
	for(int i=0; i<q; i++){
		int a,b;cin>>a>>b;
		cout<<lca(a,b) fl;}
return 0;}

