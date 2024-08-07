#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	int n,m;cin>>n>>m;
	vector<int> adj(n,0);
	for(int i=0; i<m; i++){
		int a,b;cin>>a>>b;
		adj[a-1]++;adj[b-1]++;}
	sort(adj.rbegin(),adj.rend());
	if(adj[0]==2 && adj[n-1]==2) cout<<"ring topology";
	else if(m==n-1 && adj[0]==2) cout <<"bus topology";
	else if(adj[0]==n-1 && adj[1]==1) cout<<"star topology";
	else cout<<"unknown topology";
return 0;}

