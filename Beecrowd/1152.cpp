#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
typedef long long ll;
vector<vector<pair<ll,ll>>> adj;
vector<bool> seen;
ll prim(){
	ll res=0;
	ll n=seen.size();
	vector<ll> minE(n,INF);
	minE[0]=0;
	set<pair<ll,ll>> q;
	q.insert({0,0});
	for(ll i=0; i<n; i++){
		int v=(*q.begin()).second;
		seen[v]=true;
		res+=(*q.begin()).first;
		q.erase(q.begin());
		for(auto u : adj[v]){
			if(!seen[u.second] && u.first < minE[u.second]){
				q.erase({minE[u.second],u.second});
				minE[u.second]=u.first;
				q.insert(u);}}}
	return res;}
int main(){
	ll n,m;
	cin>>n>>m;
	while(n!=0&&m!=0){
	seen.assign(n,false);
	adj.clear();
	adj.resize(n);
	ll tot=0;
	for(ll i=0; i<m; i++){
		ll a,b,c;cin>>a>>b>>c;
		adj[a].push_back({c,b});
		adj[b].push_back({c,a});
		tot+=c;}
	cout<<tot-prim() fl;
	cin>>n>>m;}
return 0;}
