#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
int main(){__
	int n,nRota;cin>>n>>nRota;
	vector<vector<int>> adj(n+1);
	vector<bool> seen(n+1,false);
	for(int i=0; i<nRota;i++){
		int a,b;cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);}
	queue<int> q;
	vector<int> dist(n+1);
	seen[1]=true;
	dist[1]=0;
	dist[n]=-1;
	q.push(1);
	while(!q.empty()){
		int s=q.front();q.pop();
		for(int u : adj[s]){
			if (seen[u]) continue;
			seen[u]=true;
			dist[u]=s;
			q.push(u);}}
	if(dist[n]==-1) cout<<"IMPOSSIBLE"<<endl;
	else{
		int tam=0;
		stack<int> rota;
		while(dist[n]!=0){tam++;rota.push(n);n=dist[n];}
		cout<<tam+1<<endl<<"1 "<<rota.top();
		rota.pop();
		while(!rota.empty()){cout<<" "<<rota.top();rota.pop();}}
return 0;}


