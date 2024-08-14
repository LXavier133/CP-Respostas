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
	vector<pair<int,int>> qr;
	vector<pair<int,int>> nqr;
	for(int i=0; i<d; i++){
		int a,b;cin>>a>>b;
		qr.push_back({a-1,b-1});}
	for(int i=0; i<m; i++){
		int a,b;cin>>a>>b;
		nqr.push_back({a-1,b-1});}
	int k=0;
	for(int i=0; 3*i<e; i++){
		vector<bool> seen(e,false);
		int a,b,c;cin>>a>>b>>c;
		seen[a-1]=true;seen[b-1]=true;seen[c-1]=true;
		for(int j=0; j<d; j++){
			if(!(seen[qr[j].f]&&seen[qr[j].s])) k++;}
		for(int j=0; j<m; j++){
			if(seen[nqr[j].f]&&seen[nqr[j].s]) k++;}}
	cout<<k;
return 0;}

