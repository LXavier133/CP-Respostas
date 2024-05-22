#include <bits/stdc++.h>
using namespace std;
int main(){
	string linha;cin>>linha;
	while(linha!="*"){
	int compasso=0; //qro q seja 64
	int compassoCorreto=0;
	for(auto &nota : linha){
		if(nota=='/'){
			if(compasso==64) compassoCorreto++;
			compasso=0;}
		else if(nota=='W') compasso+=64;
		else if(nota=='H') compasso+=32;
		else if(nota=='Q') compasso+=16;
		else if(nota=='E') compasso+=8;
		else if(nota=='S') compasso+=4;
		else if(nota=='T') compasso+=2;
		else if(nota=='X') compasso+=1;}
	cout<<compassoCorreto<<endl;
	cin>>linha;}
	return 0;
}
