#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	int t,s,n;cin>>t>>s>>n;
	int b=s,u=0;
	int at,ut=0;
	for(int i=0;i<n;i++){
		cin>>at;
		b+=u-max(0,u-(at-ut));
		u=max(0,u-(at-ut));
		ut=at;
		swap(b,u);}
	u=max(0,u-(t-ut));
	cout<<u;
return 0;}

