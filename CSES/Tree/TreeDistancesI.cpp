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
	ll a=nDist;
	dist=0;
	fill(seen.begin(),seen.end(),false);
	dfs(nDist,0);
	ll b=nDist;
	vector<ll> distA(n);
	vector<ll> distB(n);
	queue<ll> q;
	fill(seen.begin(),seen.end(),false);
	distA[a]=0;
	seen[a]=true;
	q.push(a);
	while(!q.empty()){
		ll s = q.front();q.pop();
		for(auto u :adj[s]){
			if(seen[u]) continue;
			seen[u]=true;
			distA[u]=distA[s]+1;
			q.push(u);}}
	fill(seen.begin(),seen.end(),false);
	distB[b]=0;
	seen[b]=true;
	q.push(b);
	while(!q.empty()){
                ll s = q.front();q.pop();
                for(auto u :adj[s]){
                        if(seen[u]) continue;
                        seen[u]=true;
                        distB[u]=distB[s]+1;
                        q.push(u);}}
	for(int i=0; i<n; i++) cout<<max(distA[i],distB[i])<<" ";
return 0;}

