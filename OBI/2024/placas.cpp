#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
int main(){__
	string placa;cin>>placa;
	if(placa.size()==8){
		for(int i=0;i<3;i++) if(placa[i]-'A'<0 || placa[i]-'A' >25){cout<<0<<endl;return 0;}
		if(placa[3]!='-'){cout<<0<<endl;return 0;}
		for(int i=4;i<8;i++) if(placa[i]-'0'<0 || placa[i]-'0' >9){cout<<0<<endl;return 0;}
		cout<<1<<endl;}
	else if(placa.size()==7){
		for(int i=0;i<3;i++) if(placa[i]-'A'<0 || placa[i]-'A' >25){cout<<0<<endl;return 0;}
		if(placa[4]-'A'<0 || placa[4]-'A' >25){cout<<0<<endl;return 0;}
		if(placa[3]-'0'<0 || placa[3]-'0' >9){cout<<0<<endl;return 0;}
		if(placa[5]-'0'<0 || placa[5]-'0' >9){cout<<0<<endl;return 0;}
		if(placa[6]-'0'<0 || placa[6]-'0' >9){cout<<0<<endl;return 0;}
		cout<<2<<endl;}
	else cout<<0<<endl;
return 0;}

