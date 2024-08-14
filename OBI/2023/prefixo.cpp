#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	int x,y,k=0;string a,b;cin>>x>>a>>y>>b;
	for(int i=0; i<min(x,y) ; i++){
		if(a[i]!=b[i]) break;
		++k;}
	cout<<k;
return 0;}

