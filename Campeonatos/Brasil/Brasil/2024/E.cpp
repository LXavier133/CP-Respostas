#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	int n;cin>>n;
	int a,b,c,l;
	for(int i=0; i<n; i++) for(int j=0; j<n; j++){
		if(i==0 && j==0) cin>>a;
		else if(i==0 && j==1) cin>>b;
		else if(i==1 && j==0) cin>>c;
		else cin>>l;}
	if(a<b && a<c) cout<<0;
	if(b<a && a<c) cout<<1;
	if((c<b && b<a) || (b<c && c<a)) cout<<2;
	if(c<a && a<b) cout<<3;
return 0;}

