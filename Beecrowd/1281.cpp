#include <bits/stdc++.h>
using namespace std;
int main(){
	int nCasos;
	int nItens;
	int nFrutas;
	string fruta;
	double preco;
	double custoTotal;
	cin>>nCasos;
	for(int i=0;i<nCasos;i++){
	map<string,double> custos;
	cin>>nItens;
	for(int i=0;i<nItens;i++){
		cin>>fruta>>preco;
		custos[fruta]=preco;}
	custoTotal=0;
	cin>>nFrutas;
	for(int i=0;i<nFrutas;i++){
		cin>>fruta>>preco;
		custoTotal+=preco*custos[fruta];}
	printf("R$ %.2f\n",custoTotal);
	}
	return 0;
}
