#include <bits/stdc++.h>
using namespace std;
int main(){//freopen("output.txt","w",stdout);
long nVagoes;scanf("%ld",&nVagoes);
while (nVagoes){
	queue<char>trilhoA,trilhoB;
	stack<char>estacao;
	bool certo=true;
	for(long i=0;i<nVagoes;i++){
		char aux;cin>>aux;
		trilhoA.push(aux);}
	for(long i=0;i<nVagoes;i++){
                char aux;cin>>aux;
		trilhoB.push(aux);}
	while (!trilhoB.empty() && certo){
		if(trilhoA.empty() &&(estacao.empty() || estacao.top() != trilhoB.front())){certo=false; break;}
		if(!trilhoA.empty() && trilhoA.front()==trilhoB.front()){
			trilhoA.pop();trilhoB.pop();cout<<"IR";}
		else if(!estacao.empty()&&trilhoB.front()==estacao.top()){
			trilhoB.pop();estacao.pop();cout<<"R";}
		else if(!trilhoA.empty()){
			estacao.push(trilhoA.front());trilhoA.pop();cout<<"I";}}
	if(certo)cout<<endl;
	else cout<<" Impossible"<<endl;
	scanf("%ld",&nVagoes);
}}
