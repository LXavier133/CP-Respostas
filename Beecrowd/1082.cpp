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

int main(){__
int t;cin>>t;for(int k=1;k<=t;k++){
	cout<<"Case #"<<k<<":\n";
	int n,m;cin>>n>>m;
	vector<vector<int>> adj(n);
	seen.assign(n,false);
	for(int i=0; i<m; i++){
		char a,b;cin>>a>>b;
		adj[a-'a'].push_back(b-'a');
		adj[b-'a'].push_back(a-'a');}
	vector<int> ordem;
	for(int i=0; i<n; i++) if(!seen[i]) dfs(i, adj, ordem);
	reverse(ordem.begin(), ordem.end());
	seen.assign(n,false);
	vector<vector<int>> qqSCC;
	for(auto s : ordem) if(!seen[s]){
		vector<int> C;
		dfs(s, adj, C);
		sort(C.begin(),C.end());
		qqSCC.push_back(C);}
	sort(qqSCC.begin(),qqSCC.end());
	for(auto v : qqSCC){
		for(auto elm : v) cout<<(char)(elm+'a')<<",";
		cout<<"\n";}
	cout<<qqSCC.size()<<" connected components\n\n";}
return 0;}

