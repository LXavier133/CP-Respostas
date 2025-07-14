#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
vector<vector<int>> adj;
vector<int> in;
vector<int> out;
int timer=0;
void dfs(int s){
	in[s]=timer++;
	for(auto u : adj[s]) dfs(u);
	out[s]=timer++;
}

int main(){__
	int n,q;cin>>n>>q;
	unordered_map<int,int> kfalse;
	int difK=0;
	vector<int> k(n);
	for(int i=0; i<n; i++){
		int kF;cin>>kF;
		if(kfalse.find(kF)==kfalse.end()) kfalse[kF]=difK++;
		k[i]=kfalse[kF];}
	adj.resize(n);
	in.resize(n);
	out.resize(n);
	vector<vector<int>> QK(difK);
	for(int i=1; i<n; i++){
		int x,y;cin>>x>>y;
		adj[x-1].push_back(y-1);
	}
	dfs(0);
	for(int i=0; i<n; i++) QK[k[i]].push_back(in[i]);
        for(int i=0; i<difK; i++) sort(QK[i].begin(),QK[i].end());
	for(int i=0; i<q; i++){
		int x,kcon; cin>>x>>kcon;
		if(kfalse.find(kcon)==kfalse.end()){
			cout<<0 fl;
			continue;}
		kcon=kfalse[kcon];
		cout<<(upper_bound(QK[kcon].begin(),QK[kcon].end(),out[x-1])-QK[kcon].begin())-(lower_bound(QK[kcon].begin(),QK[kcon].end(),in[x-1])-QK[kcon].begin()) fl;}
return 0;}

