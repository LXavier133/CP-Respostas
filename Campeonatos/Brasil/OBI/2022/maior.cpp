#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
int sum(int n){
	int s=0;
	while(n!=0){
		s+=n%10;
		n=n/10;}
	return s;}
int main(){__
	int n,m,s;cin>>n>>m>>s;
	for(int i=m;i>=n;i--)if(sum(i)==s){cout<<i<<endl;return 0;}
	cout<<-1<<endl;
return 0;}

