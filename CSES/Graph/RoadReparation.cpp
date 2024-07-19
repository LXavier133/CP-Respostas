#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
typedef long long ll;
vector<vector<pair<ll,ll>>> adj;
vector<bool> seen;
void prim(){
	ll res=0;
	ll n=seen.size();
	vector<ll> minE(n,INF);
	minE[0]=0;
	set<pair<ll,ll>> q;
	q.insert({0,0});
	for(ll i=0; i<n; i++){
		if(q.empty()){cout<<"IMPOSSIBLE"; return;}
		int v=(*q.begin()).second;
		seen[v]=true;
		res+=(*q.begin()).first;
		q.erase(q.begin());
		for(auto u : adj[v]){
			if(!seen[u.second] && u.first < minE[u.second]){
				q.erase({minE[u.second],u.second});
				minE[u.second]=u.first;
				q.insert(u);}}}
	cout<<res;}
int main(){
	ll n,m;cin>>n>>m;
	seen.resize(n,false);
	adj.resize(n);
	for(ll i=0; i<m; i++){
		ll a,b,c;cin>>a>>b>>c;
		adj[a-1].push_back({c,b-1});
		adj[b-1].push_back({c,a-1});}
	prim();
return 0;}
