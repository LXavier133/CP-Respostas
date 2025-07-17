#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	string s;cin>>s;
	int t=0,a=0,u=0,p=0;
	for(char c : s){
		switch(c){
		case 'T':
			t++;
			break;
		case 'A':
			a++;
			break;
		case 'U':
			u++;
			break;
		case 'P':
			p++;
			break;
		default:
			break;
		}
	}
	int ans = min(t,min(p,a+u));
	cout<<ans;
return 0;}

