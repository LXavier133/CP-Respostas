#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
typedef long long ll;
int main(){__
	int n,nC;cin>>n>>nC;
	vector<int> coins(nC);
	for(int i=0; i<nC;i++) cin>>coins[i];
	vector<bool> res(n+1,false);
	for(int i=1; i<=n; i++) for(auto c : coins) if(i-c>=0 && !res[i-c]){res[i]=true; break;}
	for(int i=1;i<=n; i++) cout<<(res[i]? "W" : "L");
return 0;}

