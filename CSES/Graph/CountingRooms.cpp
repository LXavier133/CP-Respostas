#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
bool seen[1000][1000]={{false}};
char tab[1000][1000]={{'#'}};
int xm,ym;
int cnt;
void g(int x, int y){
	if(seen[x][y]==true || x>=xm || y>=ym || x<0 || y<0 || tab[x][y]!='.') return;
	seen[x][y]=true;
	g(x+1,y);
	g(x,y+1);
	g(x-1,y);
	g(x,y-1);}	
int main(){__
	cin>>ym>>xm;
	for(int i=0;i<ym;i++) for(int j=0;j<xm;j++) cin>>tab[j][i];
	for(int i=0;i<ym;i++) for(int j=0;j<xm;j++) if(!seen[j][i] && tab[j][i]=='.'){cnt++; g(j,i);}
	cout<<cnt<<endl;
return 0;}

