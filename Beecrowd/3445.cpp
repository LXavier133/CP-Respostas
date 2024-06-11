#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
int main(){__
	int nDias,casa,trabalho;cin>>nDias>>casa>>trabalho;
	char chuva;
	int* atual=&casa;
	int* outro=&trabalho;
	int* aux;
	for(int i=0; i<2*nDias;i++){
		cin>>chuva;
		if(chuva=='Y'|| *outro==0){cout<<"Y";
			(*atual)--;
			(*outro)++;}
		else cout<<"N";
		aux=atual;
		atual=outro;
		outro=aux;
		if(*atual==casa){cout<<endl;}
		else cout<<" ";}
return 0;}

