#include <bits/stdc++.h>
using namespace std;
int main(){//freopen("output.txt","w",stdout);
long nVagoes;scanf("%ld",&nVagoes);
while (nVagoes){
	bool fim=false;
	while (!fim){
	queue<long>trilhoA,trilhoB;
	stack<long>estacao;
	bool certo=true;
	for(long i=0;i<nVagoes;i++){
		long aux;scanf("%ld",&aux);
		if (aux==0){fim=true;cout<<endl;break;}
		trilhoB.push(aux);
		trilhoA.push(i+1);}
	while (!trilhoB.empty() && certo){
		if(trilhoA.empty() &&(estacao.empty() || estacao.top() != trilhoB.front())){certo=false; break;}
		if(!trilhoA.empty() && trilhoA.front()==trilhoB.front()){
			trilhoA.pop();trilhoB.pop();}
		else if(!estacao.empty()&&trilhoB.front()==estacao.top()){
			trilhoB.pop();estacao.pop();}
		else if(!trilhoA.empty()){
			estacao.push(trilhoA.front());trilhoA.pop();}}
	if(certo && !fim) cout<<"Yes"<<endl;
	else if (!fim) cout<<"No"<<endl;}
	scanf("%ld",&nVagoes);
}}

