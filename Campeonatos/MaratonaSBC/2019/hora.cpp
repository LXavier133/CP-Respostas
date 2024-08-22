#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	int n,p;cin>>n>>p;
	bool prima=true;
	for(int i=1; i<=9; i++){
	    if(prima) prima=false;
	    else cout<<" ";
	    cout<<(ll) ceil(1.0*p*n*i/10);}
	cout<<"\n";
return 0;}
