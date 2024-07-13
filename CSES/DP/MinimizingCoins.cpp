#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
typedef long long ll;
int main(){__
	int n,x;cin>>n>>x;
	vector<int> coins(n);
	for(int i=0; i<n;i++) cin>>coins[i];
	vector<int> sum(x+1);
	sum[0]=0;
	for(int i=1; i<x+1;i++){
		int best=9999999;
		for(auto c:coins) if(i-c>=0) best=min(best,sum[i-c]);
		sum[i]=min(best+1,9999999);}
	if(sum[x]==9999999) cout<<-1;
	else cout<<sum[x];
return 0;}

