#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
int main(){__
	long long n;cin>>n;
	long long res=0;
	long long ant;cin>>ant;
	long long at;
	for(int i=1; i<n;i++){
		cin>>at;
		res+=max((long long) 0,ant-at);
		ant=max(ant,at);}
	cout<<res;
return 0;}

