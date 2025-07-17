#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
vector<int> loc1(ceil(log2(2000000000))+1);
int main(){__
	int n;cin>>n;
	int lmax=0;
	for(int i=0; i<n; i++){
		int a;cin>>a;
		lmax=max(lmax,(int)ceil(log2(a)));
		for(int j=0; j<=ceil(log2(a)); j++){
			if((1<<j)&a) loc1[j]++;}}
	for(int i=0; i<n; i++){
		int res=0;
		for(int j=0; j<=lmax; j++){
			if(loc1[j]>0){
				res+=(1<<j);
				loc1[j]--;}}
		cout<<res<<" ";}
return 0;}

