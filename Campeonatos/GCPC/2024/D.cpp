#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;

int main(){__
	int t,c,o,d,i;cin>>t>>c>>o>>d>>i;
	ll maxV=2*t+3*c+4*o+6*d+10*i+(t+c+o+d+i)/2;
	cout<<maxV<<" ";
	for(int k = 1; k<=maxV; k++){
		if(maxV+k<=4*t+6*c+8*o+12*d+20*i) cout<<maxV+k<<" ";
		if(maxV-k>=t+c+o+d+i) cout<<maxV-k<<" ";
	}
return 0;}

