#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF ((unsigned)~0)
typedef long long ll;
int main(){__
	ll n;cin>>n;
	while(n--){
		ll a,b;cin>>a>>b;
		cout<<(((a+b)%3==0 && 2*min(a,b)>=max(a,b))? "YES\n":"NO\n");}
return 0;}

