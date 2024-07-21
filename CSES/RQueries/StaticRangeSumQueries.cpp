#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
typedef long long ll;
int main(){__
	ll n,q;cin>>n>>q;
	vector<ll> pSum(n+1,0);
	for(int i=1;i<n+1;i++){
		cin>>pSum[i];
		pSum[i]+=pSum[i-1];}
	while(q--){
		int a,b;cin>>a>>b;
		cout<<pSum[b]-pSum[a-1] fl;}
return 0;}

