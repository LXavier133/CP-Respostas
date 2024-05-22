#include <bits/stdc++.h>
using namespace std;
int getIndexMenor(int alvo[], int tamanhoAlvo){
	return distance(alvo, min_element(alvo, alvo+tamanhoAlvo));
}
int main(){
	int numFunc;
	int numCliente;
	int itensCliente;
	cin>> numFunc>>numCliente;
	int valorFunc[numFunc];
	int tempoFunc[numFunc]={0};
	int indexMenor;
	for(int i=0;i<numFunc;i++){
		cin>>valorFunc[i];
	}
	for(int i=0;i<numCliente;i++){
		cin>>itensCliente;
		indexMenor=getIndexMenor(tempoFunc,numFunc);	
		tempoFunc[indexMenor]+=valorFunc[indexMenor]*itensCliente;
	}
	cout<<*max_element(tempoFunc,tempoFunc+numFunc)<<endl;
}
