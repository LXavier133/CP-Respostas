#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	int n,x;cin>>n>>x;
	vector<pair<int,int>> l(n);
	for(int i=0; i<n; i++){
		int a;cin>>a;
		l[i]={a,i+1};}
	sort(l.begin(),l.end());
	int iE=0, iD=n-1;
	while(iE<iD){
		if(l[iE].first+l[iD].first>x) iD--;
		else if(l[iE].first+l[iD].first<x) iE++;
		else{
			cout<<l[iE].second SS l[iD].second; return 0;}}
	cout<<"IMPOSSIBLE";
return 0;}

