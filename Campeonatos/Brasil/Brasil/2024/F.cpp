#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
vector<int> fibo(100);

int f(int n){
	if(n==0 || n==1) return 1;
	if(fibo[n]!=0) return fibo[n];
	fibo[n] = f(n-1) + f(n-2);
	return fibo[n];}

int main(){__
	int n;cin>>n;cout<<f(n);
return 0;}

