#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
int main(){__
	int volta=false;
	int nLinhas;cin>>nLinhas;
	string linha;
	char atual;
	int max=0;
	int comida=0;
	while(nLinhas--){
		cin>>linha;
		if(volta) reverse(linha.begin(),linha.end());
		volta=!volta;
		istringstream iss(linha);
		while(iss>>atual){
			if(atual=='o') comida++;
			else if(atual=='A'){max=(max>comida)? max:comida;comida=0;}}}
max=(max>comida)? max:comida;cout<<max<<endl;return 0;}

