#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
int main(){__
	int nApito;cin>>nApito;
	while(nApito--){
		int hora;
		string temp;
		cin>>hora>>temp;
		int tempo=(temp=="1T")? 1:2;
		hora+=45*(tempo-1);
		if(hora>45 and tempo==1) cout<<"45+"<<hora-45<<endl;
		else if(hora>90 and tempo==2) cout<<"90+"<<hora-90<<endl;
		else cout<<hora<<endl;
	}
return 0;}

