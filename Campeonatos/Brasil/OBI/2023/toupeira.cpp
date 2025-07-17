#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
int main(){__
	int casa,caminho;cin>>casa>>caminho;
	bool grid[casa+1][casa+1];
	memset(grid,false,sizeof(grid));
	for(int i=0;i<caminho;i++){
		int a,b;cin>>a>>b;
		grid[a][b]=true;grid[b][a]=true;}
	int sugestoes;cin>>sugestoes;
	int n=0;
	while(sugestoes--){
		int nCasa;cin>>nCasa;
		int casa1,casa2;cin>>casa1;
		int vale=true;
		for(int i=1;i<nCasa;i++){
			cin>>casa2;
			if(grid[casa1][casa2]==0){vale=false;break;}
			casa1=casa2;}
		if(vale) n++;}
	cout<<n<<endl;
return 0;}

