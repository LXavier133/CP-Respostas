#include <bits/stdc++.h>
using namespace std;
int main(){
	long numLista,numConsulta;
	while(cin>>numLista>>numConsulta){
	unordered_map<long,vector<long>> valorAparicao;
	for(int i=1;i<=numLista;i++){
		long aux;cin>>aux;
		valorAparicao[aux].push_back(i);
	}
	while(numConsulta--){
		long indice;long valor;scanf("%ld %ld", &indice, &valor);
		if (valorAparicao[valor].size()<indice)cout<<0<<endl;
		else cout<<valorAparicao[valor][indice-1]<<endl;}
	}return 0;}
