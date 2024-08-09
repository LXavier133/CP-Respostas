#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	int n,d,k;cin>>n>>d>>k;
	queue<int> q;
        vector<bool> road(n-1,false);
        vector<bool> seen(n,false);
	for(int i=0; i<d; i++){
		int a;
		cin>>a;
		seen[a-1]=true;
		q.push(a-1);}
	vector<vector<pair<int,int>>> adj(n);
	for(int i=0; i<n-1; i++){
		int a,b;cin>>a>>b;
		adj[a-1].push_back({b-1,i});
		adj[b-1].push_back({a-1,i});}
	while(!q.empty()){
		int s=q.front();q.pop();
		for(auto u:adj[s]) if(!seen[u.first]){
			road[u.second]=true;
			q.push(u.first);
			seen[u.first]=true;}}
	int sum=0;
	for(int i=0; i<n-1; i++) if(road[i]==false) sum++;
	cout<<sum fl;
	for(int i=0; i<n-1; i++) if(road[i]==false) cout<<i+1<<" ";
return 0;}

