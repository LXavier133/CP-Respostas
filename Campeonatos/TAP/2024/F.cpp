#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	int n;cin>>n;
	int csc=0, ans=0;
	for(int i=0; i<n; i++){
		int r;cin>>r;
		if(r==0){
			csc=0;
			ans--;
		}
		if(r==1){
			csc++;
			ans++;
			if(csc>=3) ans++;
		}
	}
	cout<<ans;
return 0;}

