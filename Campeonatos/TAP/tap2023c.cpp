#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF INT_MAX
typedef long long ll;

int main(){__
	ll n;cin>>n;
	vector<ll> red(n),blue(n),soma(n);
	for(ll i=0; i<n; i++) cin>>red[i];
	for(ll i=0; i<n; i++) cin>>blue[i];
	sort(red.begin(),red.end());
	sort(blue.rbegin(),blue.rend());
	for(ll i=0; i<n; i++) soma[i]=red[i]+blue[i];
	sort(soma.begin(),soma.end());
	cout<<soma[n-1]-soma[0];
return 0;}
	
