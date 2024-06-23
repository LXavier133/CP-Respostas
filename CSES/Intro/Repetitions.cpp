#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
int main(){__
	char A;
	int max=0;
	int now=0;
	char cNow='-';
	while(cin>>A)
		if(cNow!=A){
			cNow= A;
			max = (max>now)? max:now;
			now = 0;}
		else now++;
	max = (max>now)? max:now;
	cout<<max+1;
return 0;}

