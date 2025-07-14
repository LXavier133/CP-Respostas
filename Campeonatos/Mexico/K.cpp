#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF 10000000
#define SS <<" "<<
typedef long long ll;

int n;
int capacity[300][300];
vector<int> adj[300];

int bfs(int s, int t, vector<int>& parent) {
    fill(parent.begin(), parent.end(), -1);
    parent[s] = -2;
    queue<pair<int, int>> q;
    q.push({s, INF});

    while (!q.empty()) {
        int cur = q.front().first;
        int flow = q.front().second;
        q.pop();

        for (int next : adj[cur]) {
            if (parent[next] == -1 && capacity[cur][next]) {
                parent[next] = cur;
                int new_flow = min(flow, capacity[cur][next]);
                if (next == t)
                    return new_flow;
                q.push({next, new_flow});
            }
        }
    }

    return 0;
}

int maxflow(int s, int t) {
    int flow = 0;
    vector<int> parent(n+2);
    int new_flow;

    while (new_flow = bfs(s, t, parent)) {
        flow += new_flow;
        int cur = t;
        while (cur != s) {
            int prev = parent[cur];
            capacity[prev][cur] -= new_flow;
            capacity[cur][prev] += new_flow;
            cur = prev;
        }
    }

    return flow;
}


int main(){__
	int m;cin>>n>>m;
	int ans=0;
	for(int i=1; i<=n; i++){
		int d; cin>>d;
		if(d<0) {
			adj[0].push_back(i);
			adj[i].push_back(0);
			capacity[0][i]=abs(d);
		}
		if(d>0) {
			adj[n+1].push_back(i);
			adj[i].push_back(n+1);
			capacity[i][n+1]=d;
			ans+=d;
		}
	}
	for(int i=0; i<m; i++){
		int u,v;cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
		capacity[u][v]=INF;
	}
	ans-=maxflow(0,n+1);
	cout<<ans fl;
return 0;}

