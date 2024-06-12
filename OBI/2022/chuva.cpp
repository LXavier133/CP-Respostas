#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
int main(){__
	int n,s;cin>>n>>s;
	vector<int> soma(n+1,0);
	int sum=0;
	int val;
	for(int i=1;i<=n;i++){cin>>val;sum+=val;soma[i]=sum;}
	int nCaso=0;
	for(int i=0;i<=n;i++) for(int j=n;j>i;j--) if(soma[j]-soma[i]==s) nCaso++;
	cout<<nCaso<<endl;
return 0;}

