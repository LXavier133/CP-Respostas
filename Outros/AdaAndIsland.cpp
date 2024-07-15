#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
bool seen[1001][1001]={{false}};
char tab[1001][1001];
ll xm,ym;
ll cnt;
void frac(ll x, ll y){
	ll m=__gcd(x,y);
	if(m==y){cout<<x/y<<"\n";return;}
	else{cout<<x/m<< " / "<<y/m<<"\n";return;}}
void g(ll x, ll y){
	if(seen[x][y]==true || x>=xm || y>=ym || x<0 || y<0 || tab[x][y]=='~') return;
	seen[x][y]=true;
	cnt++;
	g(x+1,y);
	g(x,y+1);
	g(x-1,y);
	g(x,y-1);}	
int main(){__
	ll n;cin>>n;
	while(n--){
	memset(seen,false,sizeof(seen[0][0])*1001*1001);
	cin>>ym>>xm;
	for(ll i=0;i<ym;i++) for(ll j=0;j<xm;j++) cin>>tab[j][i];
	ll res=0;
	for(ll i=0;i<ym;i++) for(ll j=0;j<xm;j++) if(!seen[j][i] && tab[j][i]=='#'){cnt=0; g(j,i); res+=cnt*cnt;}
	frac(res,xm*ym);}
return 0;}

