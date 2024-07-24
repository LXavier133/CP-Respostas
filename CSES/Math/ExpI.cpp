#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
int t;cin>>t;while(t--){
	int a,b;cin>>a>>b;
	if(b==0){cout<<"1\n"; continue;}
	int f=floor(log2(b))+1;
	vector<int> rr(f);
	rr[0]=a;
	for(int i=1; i<f; i++){
		rr[i]=(1LL*rr[i-1]*rr[i-1])%1000000007;};
	int res=1;
	for(int i=0; i<f;i++) if(b&(1<<i)) res=(1LL*res*rr[i])%1000000007;
	cout<<res fl;}
return 0;}

