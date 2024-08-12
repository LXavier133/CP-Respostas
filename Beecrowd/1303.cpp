#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__ 
	int k=1;
	bool foo=true; 
	int n;cin>>n;
	while(n!=0){
	vector<tuple<int,double,int>> score(n,{0,0,0});
	vector<pair<int,int>> cesta(n,{0,0});
	for(int i=0; 2*i<n*(n-1); i++){
		int x,y,z,w;cin>>x>>y>>z>>w;
		if(y>w) get<0>(score[x-1])++;
		else get<0>(score[z-1])++;
		cesta[x-1].first+=y;cesta[x-1].second+=w;
		cesta[z-1].first+=w;cesta[z-1].second+=y;}
	for(int i=0; i<n; i++){
		get<2>(score[i])=-i;
		get<1>(score[i])=(cesta[i].second==0)? cesta[i].first : 1.0*cesta[i].first/cesta[i].second;}
	sort(score.rbegin(),score.rend());
	if(foo) foo=false;
	else cout fl;
	cout<<"Instancia "<<k++ fl;
	bool fii=true;
	for(auto u: score){
		if(fii) fii=false;
		else cout<<" ";
		cout<<-get<2>(u)+1;}
	cout fl;
	cin>>n;
}return 0;}


