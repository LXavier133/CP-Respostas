#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
 
int hMax;
int ssen;
vector<bool> seen;
vector<vector<int>> adj;
vector<int> p;
vector<int> h;
 
void dfsVolta(int s){
	if(seen[s] || s==0) return;
	seen[s]=true;
	ssen++;
	dfsVolta(p[s]);}
 
void dfsPai(int s, int pp){
	for(auto f: adj[s]) if(f!=pp){
		p[f]=s;
		h[f]=h[s]+1;
		dfsPai(f,s);}} 
int main(){__
	int n,k;cin>>n>>k;
	vector<int> mark;
	seen.assign(n,false);
	adj.assign(n,vector<int>());
	p.resize(n);
	h.resize(n);
	for(int i=0; i<n; i++){
		int v;cin>>v;
		if(v>k) mark.push_back(i);}
	for(int i=0; i<n-1; i++){
		int a,b;cin>>a>>b;
		adj[a-1].push_back(b-1);
		adj[b-1].push_back(a-1);}
	h[0]=0;
	dfsPai(0,0);
	for(int m : mark){
		dfsVolta(m);
		hMax=max(hMax,h[m]);}
	cout<<2*ssen-hMax fl;
return 0;}
