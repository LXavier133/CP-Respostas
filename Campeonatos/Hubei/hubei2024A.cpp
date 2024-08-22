#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__ int t;cin>>t;while(t--){
        ll x,y;cin>>x>>y;
        cout<<1 SS x/(1LL*__gcd(x,y))*y/(1LL*__gcd(x,y)) fl;
}return 0;}
