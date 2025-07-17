#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	int n;cin>>n;
	map<int,bool> resp;
	map<int,int> temp;
	map<int,int> ttot;
	int t=0;
	for(int i=0; i<n; i++){
		char a;int b;cin>>a>>b;
		if(a=='T') t+=b-1;
		else{
			t+=1;
			resp[b]=!resp[b];
			if(a=='R') temp[b]=t;
			if(a=='E') ttot[b]+=t-temp[b];}}
	for(auto u : resp){
		int b = u.first;
		if(resp[b]) cout<<b SS -1 fl;
		else cout<< b SS ttot[b] fl;}
return 0;}

