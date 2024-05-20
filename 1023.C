#include <bits/stdc++.h>
using namespace std;
int main(){
	long nPessoa;scanf("%ld", &nPessoa);
	int nCidade=1;
	while (nPessoa!=0){
		cout<<"Cidade# "<<nCidade++<<":"<<endl;
		map<int,int> mapa;
		long total=0;
		long pessoas=0;
		while(nPessoa--){
			long pessoa, consumo;scanf("%ld %ld", &pessoa, &consumo);
			if (mapa.find(consumo/pessoa)!=mapa.end()){mapa[consumo/pessoa]+=pessoa;}
			else{mapa[consumo/pessoa]=pessoa;}
			total+=consumo;pessoas+=pessoa;}
		map<int,int>::iterator i;
		for(i=mapa.begin();i!=mapa.end();){
			cout<<(*i).second<<"-"<<(*i).first;
			if(++i != mapa.end()) {
			       	cout << " ";}}
		printf("\nConsumo medio: %.2f m3.\n\n",(float)(((100*total)/pessoas))/100);
		scanf("%ld", &nPessoa);}
	return 0;}
