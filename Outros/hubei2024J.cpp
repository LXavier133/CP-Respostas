#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int MOD = 998244353;

ll powE(int a, int b){
	int f=floor(log2(b))+1;
	vector<int> rr(f);
	rr[0]=a;
	for(int i=1; i<f; i++) rr[i]=(1LL*rr[i-1]*rr[i-1])%MOD;
	ll res=1;
	for(int i=0; i<f;i++) if(b&(1<<i)) res=(1LL*res*rr[i])%MOD;
	return res;}
int main(){
	int n;cin>>n;
	ll soma=0;
	for(int i=0; i<n; i++){
		int a;cin>>a;
		soma=(soma+a)%MOD;}
	ll ans=(soma*powE(n,MOD-2))%MOD;
	while(ans<0) ans+=MOD;
	cout<<ans;
return 0;}

