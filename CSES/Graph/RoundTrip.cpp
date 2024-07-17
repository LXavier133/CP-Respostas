#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
typedef long long ll;
vector<vector<int>> adj;
vector<int> parent;
vector<short> seen;
bool imp=false;
int ultimo;
void dfs(int s){
	if(seen[s]==1 || imp) return;
	if(seen[s]==-1){imp=true;ultimo=s; return;}
	seen[s]=-1;
	for(auto u : adj[s]) if(u!=parent[s]&&!imp){parent[u]=s;dfs(u);}
	seen[s]=1;}
 
int main(){__
	int n,m; cin>>n>>m;
	adj.resize(n);parent.resize(n);seen.resize(n,0);
	for(int i=0; i<m;i++){
		int a, b; cin>>a>>b;
		a--;b--;
		adj[a].push_back(b);
		adj[b].push_back(a);}
	for(int i=0; i<n;i++) if(!imp && seen[i]==0) dfs(i);
	if(!imp) cout<<"IMPOSSIBLE";
	else{
		int a=parent[ultimo];
		stack<int> fila;
		while(a!=ultimo){fila.push(a+1); a=parent[a];}
		cout<<fila.size()+2 fl;
		cout<<ultimo +1<<" ";
		while(!fila.empty()){cout<<fila.top()<<" "; fila.pop();}
		cout<<ultimo+1;}
return 0;}
