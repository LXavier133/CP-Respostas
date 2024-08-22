#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
int main(){__
	int D,A,n;cin>>D>>A>>n;
	D+=(n>15)? 14*A:(n-1)*A;
	cout<<(32-n)*D<<endl;
return 0;}

