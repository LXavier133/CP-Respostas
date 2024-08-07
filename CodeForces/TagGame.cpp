#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
vector<bool> seen;
vector<vector<int>> adj;

void dfs(int s, int d, vector<int> &dist){
	if(seen[s]) return;
	seen[s]=true;
	dist[s]=d;
	for(auto u : adj[s]) dfs(u, d+1, dist);}

int main(){__
	int n,x; cin>>n>>x;
	--x;
	adj.resize(n);
	seen.assign(n,false);
	for(int i=0; i<n-1; i++){
		int a,b;cin>>a>>b;
		adj[a-1].push_back(b-1);
		adj[b-1].push_back(a-1);}
	vector<int> dist1(n),distX(n);
	dfs(0,0,dist1);
	seen.assign(n,false);
	dfs(x,0,distX);
	int res=-1;
	for(int i=0; i<n; i++) if(distX[i]<dist1[i]) res=max(res,dist1[i]);
	cout<<2*res;
return 0;}

