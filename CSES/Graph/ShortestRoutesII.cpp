#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF ULLONG_MAX
typedef unsigned long long ll;
int main(){
	ll n,m,q;cin>>n>>m>>q;
	vector<vector<ll>> d(n,vector<ll>(n,INF));
	for(ll i=0; i<n; i++) d[i][i]=0;
	for(ll i=0; i<m; i++){
		ll a,b,c;cin>>a>>b>>c;
		c=min(c,d[a-1][b-1]);
		d[a-1][b-1]=c;
		d[b-1][a-1]=c;}
	for(ll k=0; k<n; k++) for(ll i=0; i<n; i++) for(ll j=0; j<n; j++) if(d[i][k]<INF && d[k][j]<INF)  d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
	for(ll i=0; i<q;i++){
		ll a,b;cin>>a>>b;
		if(d[a-1][b-1]==INF) cout<<-1 fl;
		else cout<<d[a-1][b-1] fl;}
return 0;}

