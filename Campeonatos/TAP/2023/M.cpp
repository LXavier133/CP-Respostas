#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF INT_MAX
typedef long long ll;

long double LD=1.0;

int main(){
	ll n,v,soma=0;cin>>n>>v;
	for(int i=0; i<n; i++){
		char a;int k; cin>>a>>k;
		soma+=k;}
	cout<<LD*soma/v;
return 0;}
