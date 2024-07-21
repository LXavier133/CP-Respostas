#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
typedef long long ll;
int main(){__
	int n,q;cin>>n>>q;
	int pSum[n+1][n+1];
	memset(pSum,0,sizeof(pSum[0][0])*(n+1)*(n+1));
	for(int i=1; i<=n;i++) for(int j=1; j<=n; j++){
		char t; cin>>t;
		if(t=='.') t=0; else t=1;
		pSum[i][j]=pSum[i-1][j]+pSum[i][j-1]-pSum[i-1][j-1]+t;}
	for(int i=0;i<q;i++){
		int a,b,A,B;cin>>a>>b>>A>>B;
		cout<<pSum[A][B]-pSum[A][b-1]-pSum[a-1][B]+pSum[a-1][b-1] fl;}
return 0;}

