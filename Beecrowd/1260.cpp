#include <bits/stdc++.h>
using namespace std;
int main(){
	int nCasos;
	cin>>nCasos;
	cin.ignore();
	cin.ignore();
	while(nCasos--){
		string arvore;
		int total=0;
		map<string, int> lista;
		while(getline(cin,arvore)&&arvore.length()){
			if (lista.find(arvore)==lista.end()){lista[arvore]=1;}
			else{lista[arvore]++;}
			total++;
		}
		map<string, int>::iterator it;
		for(it=lista.begin(); it!=lista.end(); it++){
						cout<<(*it).first<<" ";
						printf("%.4f",(double)(*it).second/total*100);
						cout<<endl;
		}if(nCasos){cout<<endl;}
	}
}

