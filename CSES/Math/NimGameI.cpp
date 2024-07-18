#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
typedef long long ll;
int main(){__
int n;cin>>n;
	while(n--){
		int t; cin>>t;
		int res=0;
		while(t--){int a;cin>>a;res^=a;}
		if(res==0) cout<<"second" fl;
		else cout<<"first" fl;}
return 0;}

