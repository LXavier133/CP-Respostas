#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
typedef long long ll;
vector<bool> seen;
vector<ll> cat;
vector<vector<ll>> adj;
ll pode=0;
ll nCat;
void dfs(ll s, ll cpai){
	if(seen[s]) return;
	seen[s]=true;
	cpai=cat[s]*(cpai+cat[s]);
	if(cpai>nCat) return;
	if(adj[s].size()==1&&s!=0) pode++;
	else for(auto u: adj[s]) dfs(u,cpai);}

int main(){__
	ll n;cin>>n>>nCat;
	cat.resize(n);
	adj.resize(n);
	seen.resize(n,false);
	for(ll i=0;i<n;i++){
		int gato;cin>>gato;cat[i]=gato;}
	for(ll i=0;i<n-1;i++){
		ll pai,filho; cin>>pai>>filho;
		adj[pai-1].push_back(filho-1);
		adj[filho-1].push_back(pai-1);}
	dfs(0,0);
	cout<<pode;
return 0;}

