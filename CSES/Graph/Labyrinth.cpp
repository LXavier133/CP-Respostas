#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
bool seen[1000][1000]={{false}};
char tab[1000][1000]={{'#'}};
int xm,ym;
bool findy=false;
queue<tuple<int,int,char>> quu;
char og[1000][1000]; 
void g(int x, int y, char cam){
	if(findy==true || x>=xm || y>=ym || x<0 || y<0 || tab[x][y]=='#'|| seen[x][y]==true) return;
	og[x][y]=cam;
	if(tab[x][y]=='B') findy=true;
	seen[x][y]=true;
	quu.push(make_tuple(x+1,y,'R'));
	quu.push(make_tuple(x,y+1,'D'));
	quu.push(make_tuple(x-1,y,'L'));
	quu.push(make_tuple(x,y-1,'U'));}	
int main(){__
	cin>>ym>>xm;
	int xi=-1,yi=-1;
	int xb=-1,yb=-1;
	for(int i=0;i<ym;i++) for(int j=0;j<xm;j++){
		cin>>tab[j][i];
		if(tab[j][i]=='A'){xi=j;yi=i;}
		else if(tab[j][i]=='B'){xb=j;yb=i;}}
	if(xi==-1){cout<<"NO"<<endl;return 0;}
	g(xi,yi,' ');
	while(!quu.empty()){
		int x,y;char cam;
		tie(x,y,cam)=quu.front();
		quu.pop();
		g(x,y,cam);}
	if(findy){
		int ll=0;
		string res="";
		while(xb!=xi || yb!=yi){
			ll++;
			res+=og[xb][yb];
			if(og[xb][yb]=='U') yb++;
			else if(og[xb][yb]=='D') yb--;
			else if(og[xb][yb]=='R') xb--;
			else if(og[xb][yb]=='L') xb++;}
		reverse(res.begin(),res.end());
		cout<<"YES"<<endl<<ll<<endl<<res<<endl;}
	else cout<<"NO"<<endl;
return 0;}
