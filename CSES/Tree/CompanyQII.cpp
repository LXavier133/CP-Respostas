#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
typedef long long ll;
int timer =0;
int l;
vector<int> tin,tout;
vector<vector<int>> up, adj;
void dfs(int s, int p){
	tin[s]=++timer;
	up[s][0]=p;
	for(int i=1; i<=l; i++) up[s][i]=up[up[s][i-1]][i-1];
	for(auto u : adj[s]) if(u != p) dfs(u,s);
	tout[s]=timer;}
int main(){
	int n,q;cin>>n>>q;
	l=ceil(log2(n));
	tin.resize(n);tout.resize(n);adj.resize(n);up.assign(n,vector<int>(l+1));
	for(int i=1; i<n; i++){
		int p;cin>>p;
		p--;
		adj[i].push_back(p);
		adj[p].push_back(i);}
	dfs(0,0);
	for(int i=0;i<q;i++){
		int a,b;cin>>a>>b;
		a--;b--;
		if(tin[a]<=tin[b] && tout[a] >= tout[b]) cout<<a+1 fl;
		else if(tin[b]<=tin[a] && tout[b] >= tout[a]) cout<<b+1 fl;
		else{ for(int q=l; q>=0; q--) if(!(tin[up[b][q]]<=tin[a] && tout[up[b][q]] >= tout[a])) b = up[b][q]; cout<<up[b][0]+1 fl;}}
return 0;}

