#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define dbg <<" "<<
typedef long long ll;

vector<bool> seen;
vector<vector<ll>> adj;
vector<pair<ll,ll>> cCow;
ll xA=INF, xB=-1, yA=INF, yB=-1;

void dfs(ll s){
	if(seen[s]) return;
	xA=min(xA,cCow[s].first);
	xB=max(xB,cCow[s].first);
	yA=min(yA,cCow[s].second);
	yB=max(yB,cCow[s].second);
	seen[s]=true;
	for(auto u : adj[s]) dfs(u);}

int main(){
	ifstream fin("fenceplan.in");
	ofstream fout("fenceplan.out");
	ll n,m;fin>>n>>m;
	seen.resize(n,false);
	adj.resize(n);
	cCow.resize(n);
	for(int i=0; i<n; i++){
		ll a,b;fin>>a>>b;
		cCow[i]={a,b};}
	for(int i=0; i<m; i++){
		ll a,b;fin>>a>>b;
		adj[a-1].push_back(b-1);
		adj[b-1].push_back(a-1);}
	ll per=INF;
	for(int i=0; i<n; i++){
		if(!seen[i]){dfs(i);
		per=min(per,2*(abs(xA-xB)+abs(yA-yB)));
		xA=INF;xB=-1;yA=INF;yB=-1;}}
	fout<<per;
return 0;}

