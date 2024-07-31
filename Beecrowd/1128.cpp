#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
typedef long long ll;

vector<bool> seen;

void dfs(int s, vector<vector<int>> & adj, vector<int> & out){
	if(seen[s]) return;
	seen[s]=true;
	for(auto u : adj[s]) dfs(u, adj, out);
	out.push_back(s);}

int main(){
	int n,m;cin>>n>>m;
	while(n!=0&&m!=0){
	vector<vector<int>> adj(n);
	vector<vector<int>> adjT(n);
	seen.assign(n,false);
	for(int i=0; i<m; i++){
		int a,b,c;cin>>a>>b>>c;
		adj[a-1].push_back(b-1);
		adjT[b-1].push_back(a-1);
		if(c==2){
			adj[b-1].push_back(a-1);
			adjT[a-1].push_back(b-1);}}
	vector<int> ordem;
	for(int i=0; i<n; i++) if(!seen[i]) dfs(i, adj, ordem);
	reverse(ordem.begin(), ordem.end());
	seen.assign(n,false);
	int nSCC=0;
	for(auto s : ordem) if(!seen[s]){
		vector<int> C;
		dfs(s, adjT, C);
		nSCC++;}
	cout<<((nSCC==1)? 1:0 )<<"\n";
	cin>>n>>m;}
return 0;}

