#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	int n;cin>>n;
	int C;cin>>C;
	bool eba=true;
	for(int i=1; i<n; i++){
		int a;cin>>a;
		if(a>C) eba=false;}
	if(eba) cout<<"S\n";
	else cout<<"N\n";
return 0;}

