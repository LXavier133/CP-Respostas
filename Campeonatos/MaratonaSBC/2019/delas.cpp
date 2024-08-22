#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
vector<vector<int>> adj;
vector<int> d, dp,adjT;
int dM;
priority_queue<int> pq;
void dfs1(int s){
	for(int u : adj[s]){
		d[u]=d[s]+1;
		dfs1(u);}}
void dfs2(int s){
	if(s!=0 && dp[adjT[s]]<dp[s]+1){
		dp[adjT[s]]=dp[s]+1;
		dfs2(adjT[s]);}
	else dM=dp[s];
	if(adj[s].empty()) pq.push(dM);}


int main(){__
	int n,k;cin>>n>>k;
	adj.assign(n,vector<int>{});
	adjT.assign(n,0);
	dp.assign(n,-1);
	for(int i=1;i<n;i++){
		int c;cin>>c;
		adj[c-1].push_back(i);
		adjT[i]=(c-1);}
	d.assign(n,0);
	dfs1(0);
	priority_queue<pair<int,int>> noFundo;
	int nNos=0;
	for(int i=0; i<n; i++) if(adj[i].empty()) noFundo.push({d[i],i});
	while(!noFundo.empty()){
		pair<int,int>s=noFundo.top();noFundo.pop();
		++nNos;
		dp[s.second]=1;
		dM=0;
		dfs2(s.second);}
	if(k>=nNos) cout<<n;
	else{
		int res=0;
		for(int i=0; i<k; i++){
			res+=pq.top();
			pq.pop();}
		cout<<res;}
	
	
return 0;}

