#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	int n,d;cin>>n>>d;
	vector<pair<int,int>> prod;
	for(int i=0; i<n; i++){
		int x,v;cin>>x>>v;
		prod.push_back({x,v});}
	sort(prod.begin(),prod.end());
	vector<int> pSum(n+1,0);
	for(int i=1; i<=n; i++) pSum[i]=pSum[i-1]+prod[i-1].second;
	vector<int> esq(n+1,0);
	vector<int> dir(n+2,0);
	for(int i=1; i<=n; i++){
		int b=lower_bound(prod.begin(),prod.end(),make_pair(prod[i-1].first-d,0)) - prod.begin();
		esq[i]= max(pSum[i]-pSum[b], esq[i-1]);}
	for(int i=n; i>=1; i--){
		int b=upper_bound(prod.begin(),prod.end(),make_pair(prod[i-1].first+d,0)) - prod.begin();
		dir[i]= max(pSum[b]-pSum[i-1], dir[i+1]);}
	int res=0;
	/*for(auto p : esq) cout<<p<<" ";
	cout fl;
	for(auto p : dir) cout<<p<<" ";
	cout fl;*/
	for(int i=0; i<=n; i++) res=max(res,esq[i]+dir[i+1]);
	cout<<res fl;
return 0;}

