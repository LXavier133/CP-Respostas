#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
typedef long long ll;
int main(){__
	ll n;cin>>n;
	ll res=0;
	while(n!=0){
		n/=5;
		res+=n;}
	cout<<res;
return 0;}

