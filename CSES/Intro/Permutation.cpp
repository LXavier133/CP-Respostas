#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
int main(){__
	ll n; cin>>n;
	if(n==1){cout<<"1\n";return 0;}
	if(n<4){cout<<"NO SOLUTION\n";return 0;}
	cout<<(n+1)/2;
	for(int i=1; i<(n+1)/2;i++) cout<<" "<<n-i+1<<" "<<i;
	if(n%2==0) cout<<" "<<n/2+1;
return 0;}

