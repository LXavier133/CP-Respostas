#include <bits/stdc++.h>
using namespace std;
map <int, long> f;
long fat(int n){
	if(f.find(n)==f.end()) f[n]=n*fat(n-1);
	return f[n];}
int main(){
	f[0]=(long)1;
	int numACM;cin>>numACM;
	while(numACM){
		int numDEC=0;
		int pos=1;
		while(numACM){
			numDEC+=fat(pos)*(numACM%10);
			numACM/=10;
			pos++;}
		cout<<numDEC<<endl;cin>>numACM;}
	return 0;}
	
