#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
typedef long long ll;
typedef struct{
	ll a;
	ll b;
	ll w;} Edge;
int main(){__
	int n,m;cin>>n>>m;
	vector<Edge> edges;
	for(int i=0; i<m;i++){
		int a,b,w;cin>>a>>b>>w;
		edges.push_back({a-1,b-1,-w});}
	vector<ll> d(n,INF);
	vector<bool> alc(n,false);
	d[0]=0;
	alc[n-1]=true;
	bool dac=false;
	for(int i=0; i<n; i++){
		for(Edge e : edges){
			if(alc[e.b]) alc[e.a]=true;
			if(d[e.a] < INF) if (d[e.b] > d[e.a] +e.w){
			d[e.b]=max(-INF,d[e.a]+e.w);
			if(i==n-1) if(alc[e.b]) dac=true;}}}
	if(dac==false) cout<<-d[n-1];
	else cout<<-1;
return 0;}

