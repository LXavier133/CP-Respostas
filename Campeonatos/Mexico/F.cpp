#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
typedef long long ll;
int main(){__
	int n,k;cin>>n>>k;
	vector<int> b(n);
	for(int i=0; i<n; i++) cin>>b[i];
	for(int i=0; i<k; i++){
		char c;int l,r; cin>>c>>l>>r;
		if(c=='Q'){
			int maxEl=-1;
			for(int i=l-1; i<r; i++) maxEl=max(maxEl,b[i]);
			cout<<maxEl fl;
		}
		if(c=='A') for(int i=l-1; i<r; i++) b[i]++;
		if(c=='R'){
			int maxEl=-1;
			for(int i=0; i<n; i++) maxEl=max(maxEl,b[i]);
			for(int i=l-1; i<r; i++) if(b[i]==maxEl) b[i]=0;
		}
	}
return 0;}

