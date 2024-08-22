#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
int main(){__
	int n,m;cin>>n>>m;
	int estoque[m][n];
	for(int i=0;i<m;i++) for(int j=0;j<n;j++) cin>>estoque[i][j];
	int vendas;cin>>vendas;
	int total=vendas;
	int x,y;
	for(int i=0;i<vendas;i++){
		cin>>x>>y;
		if(estoque[y-1][x-1]!=0) estoque[y-1][x-1]--;
		else total--;}
	cout<<total<<endl;
return 0;}

