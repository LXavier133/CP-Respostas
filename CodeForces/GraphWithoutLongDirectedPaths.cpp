#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
typedef long long ll;
bool stop=false;
vector<vector<int>> adj;
vector<bool> team;
vector<bool>seen;
void dfs(int s){
	if(seen[s] || stop) return;
	seen[s]=true;
	for(auto u: adj[s]){
		if(seen[u] && team[s]==team[u]){stop=true;return;}
		team[u]=!team[s];
		dfs(u);}}
int main(){__
	ll n,m;cin>>n>>m;
	adj.resize(n);
	seen.resize(n,false);
	team.resize(n);
	queue<ll> pais;
	for(ll i=0; i<m;i++){
		ll a,b;cin>>a>>b;
		adj[a-1].push_back(b-1);
		adj[b-1].push_back(a-1);
		pais.push(a-1);}
	team[0]=true;
	dfs(0);
	if(stop){cout<<"NO"; return 0;}
	else{
		cout<<"YES" fl;
		while(!pais.empty()){
			cout<<(int)team[pais.front()];
			pais.pop();}}
return 0;}

