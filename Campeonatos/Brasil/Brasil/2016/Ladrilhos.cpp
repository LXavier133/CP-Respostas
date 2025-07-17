#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
bool seen[200][200]={{false}};
int tab[200][200];
int xm,ym;
int cnt;
void g(int c,int x, int y){
	if(seen[x][y]==true || x>=xm || y>=ym || x<0 || y<0 || tab[x][y]!=c) return;
	seen[x][y]=true;
	cnt++;
	g(c,x+1,y);
	g(c,x,y+1);
	g(c,x-1,y);
	g(c,x,y-1);}	
int main(){__
	cin>>ym>>xm;
	for(int i=0;i<ym;i++) for(int j=0;j<xm;j++) cin>>tab[j][i];
	int res=100000;
	for(int i=0;i<ym;i++) for(int j=0;j<xm;j++) if(!seen[j][i]){cnt=0; g(tab[j][i],j,i); res=min(res,cnt);}
	cout<<res<<endl;
return 0;}

