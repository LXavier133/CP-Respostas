#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
int main(){__
int nLoop;cin>>nLoop;
while (nLoop){
int l1,l2;cin>>l1>>l2;
pair<int,int> ver={l1,l2};
int alvo;
int picos=0;
for(int i=0; i<nLoop-2;i++){
	cin>>alvo;
	if(ver.first>ver.second && ver.second<alvo) picos++;
	else if(ver.first<ver.second && ver.second>alvo) picos++;
	ver.first=ver.second;
	ver.second=alvo;}
if(ver.first>ver.second && ver.second<l1) picos++;
else if(ver.first<ver.second && ver.second>l1) picos++;
ver.first=ver.second;
ver.second=l1;
if(ver.first>ver.second && ver.second<l2) picos++;
else if(ver.first<ver.second && ver.second>l2) picos++;
ver.first=ver.second;
ver.second=l2;
cout<<picos<<endl;
cin>>nLoop;}


return 0;}

