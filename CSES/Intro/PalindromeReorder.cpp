#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF ((unsigned)~0)
typedef long long ll;
int main(){__
	map<char,int> nLetra;
	string str;cin>>str;
	for(char l : str) nLetra[l]++;
	int imp=0;
	string mp="";
	for(auto i : nLetra) if(i.second%2) {imp++; mp=i.first;}
	if(imp>1){cout<<"NO SOLUTION";return 0;}
	string res="";
	for(auto i : nLetra) for(int j=0; j<i.second/2; j++) res+=i.first;
	cout<<res<<mp;
	reverse(res.begin(),res.end());
	cout<<res;
return 0;}

