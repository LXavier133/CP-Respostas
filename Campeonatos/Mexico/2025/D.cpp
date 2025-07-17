#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef unsigned long long ll;
int main(){__
	int k;cin>>k;
	vector<ll> a(k);
	for(int i=0; i<k; i++) cin>>a[i];
	int n;cin>>n;
	vector<vector<ll>> pref(k,vector<ll>(n));
	for(int i=0; i<n; i++) for(int j=0; j<k; j++){
		ll b;cin>>b;
		if(i==0) pref[j][i]=b;
		else pref[j][i]=pref[j][i-1]+b;
	}
	ll minDia = INF;
	for(int i=0; i<k; i++) if(pref[i][n-1]!=0) minDia=min(minDia,a[i]/pref[i][n-1]);
	cout<<minDia+1<<" ";
	ll minOrd = INF;
	for(int i=0; i<k; i++) minOrd=min(minOrd,(ll) (upper_bound(pref[i].begin(),pref[i].end(),a[i]-minDia*pref[i][n-1])-pref[i].begin()));
	cout<<minOrd+1 fl;
return 0;}

