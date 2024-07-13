#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
typedef long long ll;
int main(){__
	ll n;cin>>n;
	vector<ll> pSum(n+1,0);
	for(int i=1;i<n+1;i++){
		cin>>pSum[i];
		pSum[i]+=pSum[i-1];}
	ll maxSubSum=pSum[1];
	ll minSum=pSum[0];
	for(int i=1;i<n+1;i++){
		maxSubSum=max(maxSubSum,pSum[i]-minSum);
		minSum=min(minSum,pSum[i]);}
	cout<<maxSubSum;
return 0;}

