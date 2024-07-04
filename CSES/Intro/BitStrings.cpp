#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
int main(){__
	ll n; cin>>n;
	ll res=1;
	for(int i=0;i<n;i++) res=(res*2)%(1000000007);
	cout<<res;
return 0;}

