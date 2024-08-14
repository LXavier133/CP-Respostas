#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
#define f first
#define s second
typedef long long ll;
int main(){__
	int e,d,m;cin>>e>>d>>m;
	vector<int> team(e+1);
	vector<pair<int,int>> qr;
	vector<pair<int,int>> nqr;
	for(int i=0; i<d; i++){
		int a,b;cin>>a>>b;
		qr.push_back({a,b});}
	for(int i=0; i<m; i++){
		int a,b;cin>>a>>b;
		nqr.push_back({a,b});}
	int k=0;
	for(int i=0; 3*i<e; i++){
		int a,b,c;cin>>a>>b>>c;
		team[a]=team[b]=team[c]=i;}
	for(int j=0; j<d; j++) if(team[qr[j].f]!=team[qr[j].s]) k++;
	for(int j=0; j<m; j++) if(team[nqr[j].f]==team[nqr[j].s]) k++;
	cout<<k;
return 0;}

