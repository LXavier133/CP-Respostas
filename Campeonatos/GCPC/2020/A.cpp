#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	int n;cin>>n;
	vector<tuple<int,int,string>> l;
	for(int i=0; i<n; i++){
		string a;int r; cin>>a>>r;
		int s=r;
		if(a=="cube") s*=sqrt(0.5);
		l.push_back({s,r,a});}
	sort(l.begin(),l.end());
	for(int i=1; i<n; i++) if(get<2>(l[i-1]) != get<2>(l[i])){
		if(get<2>(l[i-1])=="cube") if(get<0>(l[i])< get<0>(l[i-1])){cout<<"impossible";return 0;}
		if(get<2>(l[i-1])=="cylinder") if(get<1>(l[i]) < 2*get<1>(l[i-1])){cout<<"impossible";return 0;}
	}for(auto u : l) cout<<get<2>(u) SS get<1>(u) fl;
return 0;}

