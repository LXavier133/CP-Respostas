#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;

void solve(){
	int n,A;cin>>n>>A;
	n-=2;
	if(2*A<(n)){
		cout<<"No\n";
		return;
	}
	cout<<"Yes\n";
	vector<pair<int,int>> coord;
	cout<<-(2*A+1-n)<<" 0\n";
	int dir=n/2, esq=n/2;
	if(n%4==1) esq++;
	if(n%4==3) dir++;
	for(int i=0; i<dir+1; i++){
		if(i%2==0) cout<<"0 ";
		else cout<<"1 ";
		cout<<i fl;
	}
	for(int i=esq; i>0; i--){
		if(i%2==0) cout<<"-1 ";
		else cout<<"0 ";
		cout<<i fl;
	}
	
}
		

int main(){__
	int t;cin>>t;
	for(int i=0; i<t; i++) solve();
return 0;}

