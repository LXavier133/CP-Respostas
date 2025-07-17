#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
int main(){__
	int nPilha;cin>>nPilha;
	vector<int> pilha(nPilha+2);
	vector<int> altura(nPilha+1);
	pilha[0]=0;pilha[nPilha+1]=0;altura[0]=0;
	for(int i=1;i<=nPilha;i++){
		cin>>pilha[i];
		if(pilha[i]<=pilha[i-1]) altura[i]=min(altura[i-1]+1,pilha[i]);
		else altura[i]=altura[i-1]+1;}
	int alt=0;
	int max=0;
	for(int i=nPilha;i>0;i--){
		if(pilha[i]<=pilha[i+1]) alt=min(alt+1,pilha[i]);
                else alt++;
		int x=min(alt,altura[i]);
		max=(max>x)? max:x;}
	cout<<max<<endl;
return 0;}

