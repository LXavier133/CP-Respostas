#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<long> pares;
	vector<long> impares;
	long nNumeros;scanf("%ld", &nNumeros);
	while(nNumeros--){
		long numero;scanf("%ld",&numero);
		if(numero%2) impares.push_back(numero);
		else pares.push_back(numero);
	}
	sort(pares.begin(),pares.end());
	sort(impares.begin(),impares.end());
	vector<long>::iterator i;
	for(i=pares.begin();i!=pares.end();i++) cout<<*i<<endl;
	vector<long>::reverse_iterator ri;
	for(ri=impares.rbegin();ri!=impares.rend();ri++) cout<<*ri<<endl;
	return 0;
}
