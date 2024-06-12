#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
int main(){__
	int nFala;cin>>nFala;
	stack<int> fala;
	int ai,soma=0;
	while(nFala--){
		cin>>ai;
		if(ai==0) fala.pop();
		else fala.push(ai);}
	while(!fala.empty()){soma+=fala.top();fala.pop();}
	cout<<soma<<endl;
return 0;}

