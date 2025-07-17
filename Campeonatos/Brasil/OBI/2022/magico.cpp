#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
int main(){__
	int L;cin>>L;
	int soma1=0,soma2=0,aux=0,valor;
	int x=0,y=0;
	for(int i=0;i<L;i++){
		aux=0;
		for(int j=0;j<L;j++){
			cin>>valor;
			aux+=valor;
			if(valor==0){x=i+1;y=j+1;}}
		if(x==i+1){
			soma1=aux;}
		else soma2=aux;}
	cout<<soma2-soma1<<endl<<x<<endl<<y<<endl;
return 0;}

