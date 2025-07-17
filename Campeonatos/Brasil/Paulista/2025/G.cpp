#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	string s;
	cin>>s;
	if(s[3]=='S' && s[4]=='P') cout<<"S\n";
	else if ((s[3]=='S' && s[4]=='?') || (s[3]=='?' && s[4]=='P')) cout<<"T\n";
	else cout<<"N\n";
return 0;}
