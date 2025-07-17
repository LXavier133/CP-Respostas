#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	int n,q;cin>>n>>q;
	vector<int> aSum(n+1,0), bSum(n+1,0), eSum(n+1,0);
	for(int i=1; i<=n; i++){
		int A;cin>>A;
		if(A==1) eSum[i]=A;
		else if(A==(1 << (int) log2(A))) aSum[i]=A;
		else if(A%2 == 1) bSum[i]=A;
		eSum[i]+=eSum[i-1];
		aSum[i]+=aSum[i-1];
		bSum[i]+=bSum[i-1];
	}
	for(int i=0; i<q; i++){
		int l,r;cin>>l>>r;
		int a = aSum[r]-aSum[l-1];
		int b = bSum[r]-bSum[l-1];
		int e = eSum[r]-eSum[l-1];
		if(e%2==1) a++;
		if(a==b) cout<<"E\n";
		if(a>b) cout<<"A\n";
		if(a<b) cout<<"B\n";
	}
return 0;}


