#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
int main(){__
	long long n;cin>>n;cout<<n;
	while(n!=1){
		if(n%2) n=3*n+1;
		else n/=2;
		cout<<" "<<n;}
			
return 0;}

