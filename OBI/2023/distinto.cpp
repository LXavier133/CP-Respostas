#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	int n;cin>>n;
	int cut=0,maxS=0,now=0;
	map<int,int> lastSeen;
	for(int i=1; i<=n;i++){
		int a;cin>>a;
		if(lastSeen.find(a)!=lastSeen.end() && lastSeen[a]>cut){
			cut=lastSeen[a];
			now=i-cut;}
		else now++;
		lastSeen[a]=i;
		maxS=max(maxS,now);}
	cout<<maxS;
			
return 0;}

