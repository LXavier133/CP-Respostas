#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
vector<bool> seen(1010);
vector<vector<int>> adj(1010);
int fSeen=0;

void dfs(int s){
	if(seen[s]) return;
	seen[s]=true;
	fSeen++;
	for(auto u : adj[s]) dfs(u);}

int main(){
	int n;cin>>n;
	while(n!=0){
		seen.assign(1010,false);
		adj.assign(1010,vector<int>{});
		fSeen=0;
		for(int i=0; i<n; i++){
			int x,y;
			scanf(" (%d,%d)",&x,&y);
			adj[x-1].push_back(y-1);
			adj[y-1].push_back(x-1);}
		dfs(0);
		cout<<fSeen<<"\n";
		cin>>n;}


return 0;}

