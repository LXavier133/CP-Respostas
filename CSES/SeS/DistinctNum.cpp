#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF ((unsigned)~0)
typedef long long ll;
int main(){__
	ll n;cin>>n;
	set<ll> l;
	for(ll i=0; i<n; i++){ll a;cin>>a; l.insert(a);}
	cout<<l.size();
return 0;}

