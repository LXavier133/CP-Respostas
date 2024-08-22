#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
int main(){__
	string s;cin>>s;
	string v="";
	for(char l : s) if(l=='a' || l=='e' || l=='i' || l=='o' || l=='u') v+=l;
	string vc =v;
	reverse(vc.begin(),vc.end());
	if(vc==v) cout<<"S";
	else cout<<"N";
	cout<<endl;
return 0;}

