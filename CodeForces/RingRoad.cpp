#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
typedef long long ll;
vector<vector<pair<int,int>>> adj;
vector<bool> seen;
int pPar=0;
void dfs(int s){
	seen[s]=true;
	for(auto u:adj[s]){
		if(!seen[u.first]){
			pPar+=u.second;
			dfs(u.first);}}}

int main(){__
	int n;cin>>n;
	int pTot=0;
	adj.resize(n);
	seen.resize(n,false);
	for(int i=0;i<n;i++){
		int pai, filho, preco;cin>>pai>>filho>>preco;
		pTot+=preco;
		if(filho==1 && !adj[0].empty())  pPar+=preco;
		adj[pai-1].push_back(make_pair(filho-1,preco));
		adj[filho-1].push_back(make_pair(pai-1,0));}
	dfs(0);
	cout<<min(pTot-pPar,pPar);

return 0;}

