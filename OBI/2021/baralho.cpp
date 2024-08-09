#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){
	char b;
	int q=0;
	int n=0;
	vector<set<int>> S(4);
	vector<bool> s(4,true);
	while(cin>>b){
		if(q%3==0) n+=(b-'0')*10;
		if(q%3==1) n+=(b-'0')*1;
		if(q%3==2){
			if(b=='C'&&s[0]){if(S[0].find(n)!=S[0].end()) s[0]=false; else S[0].insert(n);}
			if(b=='E'&&s[1]){if(S[1].find(n)!=S[1].end()) s[1]=false; else S[1].insert(n);}
			if(b=='U'&&s[2]){if(S[2].find(n)!=S[2].end()) s[2]=false; else S[2].insert(n);}
                        if(b=='P'&&s[3]){if(S[3].find(n)!=S[3].end()) s[3]=false; else S[3].insert(n);}
			n=0;}
		q++;}
	for(int i=0; i<4; i++){
		if(s[i]) cout<< 13 - S[i].size() fl;
		else cout<<"error\n";}
return 0;}

