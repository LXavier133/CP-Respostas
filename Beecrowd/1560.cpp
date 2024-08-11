#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;


typedef struct{
        int x;
        int y;}P;



int area(P a, P b, P c){
	return (a.x*b.y + b.x*c.y +c.x*a.y -a.y*b.x - b.y*c.x -c.y*a.x);}

bool areaSS(P a, P b, P c, P d){
	int x= area(a,b,d);
	int y= area(b,c,d);
	int z = area(c,a,d);
	if((x>0 && y>0 && z>0) || (x<0 && y<0 && z<0)) return true;
	else return false;}


int main(){__
int n,m;while(cin>>n>>m){
	vector<P> black;
	vector<P> white;
	for(int i=0; i<n; i++){ P pt;cin>>pt.x>>pt.y;black.push_back(pt);}
	for(int i=0; i<m; i++){ P pt;cin>>pt.x>>pt.y;white.push_back(pt);}
	int res=0;
	for(int i=0; i<n; i++) for(int j=i+1; j<n; j++) for(int k=j+1; k<n; k++){
		 int ko=0;
		 for(int l=0; l<m; l++) if(areaSS(black[i],black[j],black[k],white[l])) ko++;
		 res+=ko*ko;}
	cout<<res fl;}
	
return 0;}

