#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
typedef long long ll;
vector<ll> sub;
vector<vector<ll>> adj;
void dfs(ll s, ll pai){
	for(auto u: adj[s]){
		dfs(u,s);
		sub[s]+=1;}
	sub[pai]+=sub[s];}

int main(){__
	ll n;cin>>n;
	sub.resize(n+1,0);
	adj.resize(n+1);
	for(ll i=2;i<=n;i++){
		ll pai; cin>>pai;
		adj[pai].push_back(i);}
	dfs(1,0);
	for(int i=1;i<=n;i++) cout<<sub[i]<<" ";
return 0;}

