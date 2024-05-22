#include <bits/stdc++.h>
using namespace std;
int main(){
	int nCarta;
	cin>>nCarta;
	while(nCarta!=0){
	queue<int> pilha;
	queue<int> discarte;
	for(int i=1;i<=nCarta;i++){pilha.push(i);}
	while(pilha.size()!=1){
		discarte.push(pilha.front());
		pilha.pop();
		pilha.push(pilha.front());
		pilha.pop();}
	cout<<"Discarded cards: ";
	while(discarte.size()!=1){
		cout<<discarte.front()<<", ";
		discarte.pop();}
	cout<<discarte.front()<<endl<<"Remaining card: "<<pilha.front()<<endl;
cin>>nCarta;}return 0;}

