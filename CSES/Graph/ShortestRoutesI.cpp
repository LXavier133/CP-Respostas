#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF ULLONG_MAX
typedef unsigned long long ll;
 
vector<vector<pair<ll,ll>>> adj;
 
void dij(ll s, vector<ll> &d){
	ll n=adj.size();
	d.resize(n,INF);
	priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> q;
	d[s]=0;
	q.push({0,s});
	while(!q.empty()){
		ll dv =q.top().first;
		ll v=q.top().second;
		q.pop();
		if(dv!=d[v]) continue;
		for(auto u : adj[v]) if(d[v]+u.second < d[u.first]){
			d[u.first]=d[v]+u.second;
			q.push({d[u.first],u.first});}}}
int main(){
	ll n,m;cin>>n>>m;
	adj.resize(n);
	for(ll i=0; i<m;i++){
		ll a,b,c;cin>>a>>b>>c;
		adj[a-1].push_back(make_pair(b-1,c));}
	vector<ll> d;
	dij(0,d);
	for(ll i=0; i<n; i++) cout<<d[i]<< " ";
return 0;}

