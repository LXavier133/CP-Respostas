#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
typedef long long ll;
vector<bool> seen;
vector<vector<ll>> adj;
ll dist=-1;
ll nDist=-1;

void dfs(ll s, ll d){
	if(seen[s]) return;
	seen[s] = true;
	if(d>dist) {nDist=s;dist=d;}
	for(auto u : adj[s]) dfs(u,d+1);}

int main(){__
	ll n;cin>>n;
	adj.resize(n);
	seen.resize(n,false);
	for(ll i =0; i<n-1; i++){
		ll a,b;cin>>a>>b;
		adj[a-1].push_back(b-1);
		adj[b-1].push_back(a-1);}
	dfs(0,0);
	dist=0;
	fill(seen.begin(),seen.end(),false);
	dfs(nDist,0);
	cout<<dist;
return 0;}

