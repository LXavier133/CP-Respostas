#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF ((unsigned)~0)
typedef long long ll;
int main(){__
	ll n,pMax;cin>>n>>pMax;
	vector<ll> kid(n);
	for(int i=0;i<n;i++) cin>>kid[i];
	sort(kid.begin(),kid.end());
	int i1=0;
	int i2=n-1;
	int res=0;
	while(i1<=i2){
		if(kid[i1]+kid[i2]>pMax || i1==i2){res++;i2--;}
		else{res++;i2--;i1++;}}
	cout<<res;
return 0;}

