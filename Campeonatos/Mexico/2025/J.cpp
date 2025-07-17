#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	int n;cin>>n;
	vector<int> seen(1<<26,-1);
	int now =0;
	int res=1;
	seen[0]=0;
	for(int i=1; i<=n; i++){
		char d;cin>>d;
		now=now^(1<<(d-'a'));
		if(seen[now]!=-1) res=max(res,i-seen[now]);
		else seen[now]=i;
		
		for(int j=0; j<26; j++){
			int temp=now^(1<<j);
			if(seen[temp]!=-1 && seen[temp]!=i-1) res=max(res,i-seen[temp]);
		}
	}
	cout<<res;
	
return 0;}

