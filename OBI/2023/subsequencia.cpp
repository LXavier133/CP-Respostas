#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
int main(){__
	int seq;cin>>seq;
	int sseq;cin>>sseq;
	map<int,queue<int>> pos;
	int a;
	for(int i=0;i<seq;i++){
		cin>>a;pos[a].push(i);}
	int max=-1;
	for(int i=0;i<sseq;i++){
		cin>>a;
		if(pos.find(a)==pos.end() || pos[a].empty() || pos[a].front()<=max){cout<<"N"<<endl;return 0;}
		max=pos[a].front();
		pos[a].pop();}
	cout<<"S"<<endl;
		
return 0;}

