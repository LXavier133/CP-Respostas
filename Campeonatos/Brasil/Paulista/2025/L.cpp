#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	int n; cin>>n;
	vector<vector<int>> v;
	for(int i=0; i<n; i++){
		int k; cin>>k;
		vector<int> t(k,0);
		for(int j=0; j<k; j++) cin>>t[j];
		v.push_back(t);}
	if(n>=3 || n==1) cout<<"S\n";
	else{
		bool v0=true,v1=true;
		for(auto q : v[0]) if(q!=1) v0=false;
		for(auto q : v[1]) if(q!=2) v1=false;
		if(!v1 && !v0) cout<<"N\n";
		else cout<<"S\n";}
return 0;}
