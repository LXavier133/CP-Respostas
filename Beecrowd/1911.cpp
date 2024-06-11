#include <bits/stdc++.h>
using namespace std;
int strToInt(string a){
	int res=0;
	for(int i=0; i<a.size();i++){
		if(a[i]>96){res+=(1<<i);}
	}
	return res;
}
int main(){
int nAlunos;
int nPresentes;
int fake;
cin>>nAlunos;
while(nAlunos!=0){
	fake=0;
	map<string,int> ass;
	for(int i=0;i<nAlunos;i++){
		string aluno,assOrig;
		cin>>aluno>>assOrig;
		ass[aluno]=strToInt(assOrig);
	}
	cin>>nPresentes;
	for(int i=0;i<nPresentes;i++){
		string aluno,assFake;
		cin>>aluno>>assFake;
		if (__builtin_popcount(ass[aluno]^strToInt(assFake))>1){fake++;}
	}
	cout<<fake<<endl;
	cin>>nAlunos;
}
return 0;
}
