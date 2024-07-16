#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
typedef long long ll;
vector<int> seen;
vector<vector<ll>> adj;
vector<ll> ans;
bool imp=false;
void dfs(ll s){
	if(seen[s]==1 || imp) return;
	if(seen[s]==-1) imp=true;
	seen[s]=-1;
	for(auto u : adj[s]) dfs(u);
	seen[s]=1;
	ans.push_back(s);}
int main(){__
	ll n,q;cin>>n>>q;
	adj.resize(n);seen.resize(n,0);
	for(int i=0; i<q;i++){
		ll a,b;cin>>a>>b;
		adj[a-1].push_back(b-1);}
	for(int i=0;i<n;i++) dfs(i);
	reverse(ans.begin(),ans.end());
	if(imp) cout<<"IMPOSSIBLE";
	else for(int i=0; i<n; i++) cout<<ans[i]+1<< " ";
return 0;}

