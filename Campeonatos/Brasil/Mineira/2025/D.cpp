#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	int k;cin>>k;
	int res=0;
	for(int i=1; i<=6; i++) for(int j=1; j<=6; j++) for(int l=1; l<=6; l++) if(i+j+l==k) res++;
	cout<<fixed<<setprecision(12)<<1.0*res/(6*6*6);
return 0;}

