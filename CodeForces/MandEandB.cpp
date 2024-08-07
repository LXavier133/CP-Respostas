#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
ll par=0, impar=0;
vector<vector<ll>> adj;
void dfs(ll s, ll p, bool team){
	if(team) par++; else impar++;
	for(auto u : adj[s]) if(u!=p) dfs(u,s,!team);}

int main(){__
	ll n;cin>>n;
	adj.resize(n);
	for(ll i=0;i<n-1;i++){
		ll a,b;cin>>a>>b;
		adj[a-1].push_back(b-1);
		adj[b-1].push_back(a-1);}
	dfs(0,-1,true);
	cout<<par*impar -n+1;
return 0;}

