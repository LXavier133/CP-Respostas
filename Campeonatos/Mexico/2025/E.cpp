#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	int n,m;cin>>n>>m;
	for(int i=1; i<=n; i++){
		int a;cin>>a;
		if(a>=m){
			cout<<i fl;
			return 0;
		}
	}
	cout<<"-1\n";
return 0;}

