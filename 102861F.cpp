#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
int main(){__
	int scE=0,scD=0;
	int gE=0,gD=0;
	int*saque=&scE;
	int*outro=&scD;
	char ponto;
	while(cin>>ponto){
		if(gE==2){if(ponto=='Q') {cout<<gE<<" (winner) - "<<gD<<endl;}}
		else if (gD==2){if(ponto=='Q') {cout<<gE<<" - "<<gD<<" (winner)"<<endl;}}
		else if(ponto =='S') {(*saque)++;}
		else if(ponto =='R') {(*outro)++;swap(saque,outro);}
		else if(ponto =='Q'){
			if(saque==&scE) cout<<gE<<" ("<<scE<<"*) - "<<gD<<" ("<<scD<<")"<<endl;
			else cout<<gE<<" ("<<scE<<") - "<<gD<<" ("<<scD<<"*)"<<endl;}
		if((scE>scD+1 && scE>=5) || scE>=10){scE=0;scD=0;gE++;}
		else if((scD>scE+1 && scD>= 5) || scD>=10){scE=0;scD=0;gD++;}}
 
return 0;}
