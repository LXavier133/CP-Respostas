#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
const int mod = 1000000007;
int main(){__
	int n;cin>>n;
	vector<int> dados(n+1);
	dados[0]=1;
	for(int i=0;i<=n;i++) for(int j=1;j<=6 && i-j>=0;j++) dados[i]=(dados[i]+dados[i-j])%mod;
	cout<<dados[n]<<endl;
return 0;}

