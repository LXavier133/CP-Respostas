#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
int main(){__
	long long n; cin>>n;
	long long res=n;
	for(int i=1; i<n; i++){	
		long long ei;cin>>ei;
		res^=ei;res^=i;}
	cout<<res<<endl;
return 0;}

