#include <bits/stdc++.h>
using namespace std;
string rev(string str){
	reverse(str.begin(),str.end());
	return str;}
int main(){
	stack<string> pilha;
	int nParticipantes;scanf("%d",&nParticipantes);getchar();
	int nPremios=0;
	while(nParticipantes--){
		if(pilha.empty()) pilha.push("F A C E");
		string atual;
		getline(cin,atual);
		if (pilha.top()==rev(atual)){pilha.pop();nPremios++;}
		else {pilha.push(atual);}}
	cout<<nPremios<<endl;return 0;}
