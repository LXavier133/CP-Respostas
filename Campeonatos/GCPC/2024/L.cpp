#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	string s;cin>>s;
	bool first=true;
	bool ok=true;
	string fword,sword, now;
	int open=0, close=0;
	for(auto c : s){
		if(!first){
			sword+=c;
			now+=c;
			if(c=='(') open++;
                        if(c==')') close++;
                        if(open==close) {
                                if(now!=fword) ok=false;
                                now="";
			}
		}
		else{
			fword+=c;
			if(c=='(') open++;
			if(c==')') close++;
			if(open==close) {
				first=false;
				now="";
			}
		}
	}
	if(ok) cout<<"no";
	else cout<<sword<<fword;
			
return 0;}

