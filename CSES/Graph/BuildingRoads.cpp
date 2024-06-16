#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
vector<bool> seen;
vector<vector<int>> adj;
void dfs(int s){
	seen[s] =true;
	for(int u : adj[s]){
		if(seen[u]) continue;
		dfs(u);}}

int main(){__
	int n,m;cin>>n>>m;
	seen.resize(n+1,false);
	adj.resize(n+1);
	for(int i=0; i<m;i++){
		int a,b;cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);}
	queue<int> ponte;
	dfs(1);
	seen[0]=true;
	for(int i=0; i<n+1;i++){
		if(seen[i]) continue;
		dfs(i);
		ponte.push(i);}
	cout<<ponte.size()<<endl;
	while(!ponte.empty()){
		cout<<"1 "<<ponte.front()<<endl;
		ponte.pop();}
return 0;}

