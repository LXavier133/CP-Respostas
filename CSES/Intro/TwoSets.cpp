#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF ((unsigned)~0)
typedef long long ll;
int main(){__
	ll n; cin>>n;
	if(n%4==0){
		cout<<"YES\n"<<n/2 fl;
		for(int i=1; i<=n/4; i++) cout<<2*i-1<<" "<<n-2*i+2<<" ";
		cout fl<<n/2 fl;
		for(int i=1; i<=n/4; i++) cout<<2*i<<" "<<n-2*i+1<<" ";}
	else if(n%4==3){
		cout<<"YES\n"<<n/2+1 fl;
		for(int i=-1; i<=n-4; i+=4) cout<<i+2<<" "<<i+3<<" ";
		cout fl<<n/2 fl <<"3 ";
		for(int i=3; i<=n-4; i+=4) cout<<i+1<<" "<<i+4<<" ";}
	else cout<<"NO";
return 0;}

