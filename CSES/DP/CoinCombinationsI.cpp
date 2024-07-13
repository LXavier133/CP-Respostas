#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
typedef long long ll;
int main(){__
	ll n,x;cin>>n>>x;
	vector<ll> coins(n);
	for(ll i=0; i<n;i++) cin>>coins[i];
	vector<ll> sum(x+1,0);
	sum[0]=1;
	for(ll i=1; i<x+1;i++)for(auto c:coins) if(i-c>=0) sum[i]=(sum[i]+sum[i-c])%(1000000007);
	cout<<sum[x];
return 0;}

