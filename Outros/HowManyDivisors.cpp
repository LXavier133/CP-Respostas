#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
typedef long long ll;
int main(){__
	ll a,b,n;cin>>a>>b>>n;
	int res=0;
	for(ll i=a;i<=b;i++) if(n%i==0) res++;
	cout<<res fl;
return 0;}

