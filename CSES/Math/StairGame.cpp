#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
typedef long long ll;
int main(){__
	int n; cin>>n;
	while(n--){
		int t;cin>>t;
		int res=0;
		for(int i=0; i<t; i++){
			int a;cin>>a;
			if(i%2) res^=a;}
		cout<<(res==0? "second\n" : "first\n");}
return 0;}

