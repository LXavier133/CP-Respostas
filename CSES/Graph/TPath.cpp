#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){
	int n,m; cin>>n>>m;
	vector<stack<int>> adjT(n+1);
	vector<long unsigned int> adj(n+1,0);
	for(int i=0;i<m;i++){
		int a,b;cin>>a>>b;
		adj[a]++;
		adjT[b].push(a);}
	adjT[1].push(n);
	adj[n]++;
	for(int i=1; i<n+1; i++) if(adj[i]!=adjT[i].size()){cout<<"IMPOSSIBLE";return 0;}
	stack<int> fila;
	fila.push(1);
	vector<int> res;
	int tamRes=0;
	while(!fila.empty()){
		if(adjT[fila.top()].empty()){
			res.push_back(fila.top());
			tamRes++;
			fila.pop();}
		else{
			int temp=adjT[fila.top()].top();
			adjT[fila.top()].pop();
			fila.push(temp);}}
	if(tamRes!=m+2){
		cout<<"IMPOSSIBLE";
		return 0;}
	for(int i=0; i<tamRes-1; i++) cout<<res[i]<<" ";
return 0;}

