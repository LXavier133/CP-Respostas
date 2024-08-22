#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
int main(){__
	long long A,B,C,D;cin>>A>>B>>C>>D;
	queue<long long> menor;
	stack<long long> maior;
	for(long long i=1;i*i<=C;i++)if(C%i==0){menor.push(i);maior.push(C/i);}
	while(!menor.empty()){
		long long i=menor.front();menor.pop();
		if(i%B!=0 && D%i!=0 && i%A==0){cout<<i<<endl;return 0;}}
        while(!maior.empty()){
                long long i=maior.top();maior.pop();
                if(i%B!=0 && D%i!=0 && i%A==0){cout<<i<<endl;return 0;}}
	cout<<-1<<endl;
return 0;}

