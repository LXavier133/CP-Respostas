#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
typedef long long ll;
int l;
vector<vector<int>> adj,up;
void dfs(int s, int p){
	up[s][0]=p;
	if(s==0) up[s][0]=-2;
	else{
	for(int i=1;i<=l;i++){
		if(up[s][i-1]==-2) break;
		up[s][i]=up[up[s][i-1]][i-1];
		if(up[s][i]==-2) break;}}
	for(auto u : adj[s]) if(u!=p) dfs(u, s);}
int main(){__
	int n,q;cin>>n>>q;
	adj.resize(n);
	l=ceil(log2(n));
	up.assign(n, vector<int>(l + 1,-2));
	for(int i=1; i<n; i++){
		int a; cin>>a;
		adj[i].push_back(a-1);
		adj[a-1].push_back(i);}
	dfs(0,0);
	for(int i=0; i<q; i++){
		int x,k;cin>>x>>k;
		x--;
		if(k>=n){cout<<-1; break;}
		for(int j=0;j<l;j++){if(k&(1<<j)) x=up[x][j]; if(x==-2) break;}
		cout<<x+1 fl;}
return 0;}

