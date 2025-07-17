#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF INT_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	int n;cin>>n;
	vector<ll> vec(n);
	ll maxV=-1, minV=INF;
	for(int i=0; i<n; i++){
		cin>>vec[i];
		maxV=max(maxV,vec[i]);
		minV=min(minV,vec[i]);
	}
	ll ans = -1;
	for(int i=0; i<n; i++) ans=max(ans,(maxV-minV)*(maxV-minV)+(maxV-vec[i])*(maxV-vec[i])+(minV-vec[i])*(minV-vec[i]));
	cout<<ans/2;
return 0;}

