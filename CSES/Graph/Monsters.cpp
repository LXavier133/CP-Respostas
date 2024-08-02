#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
	
int main() {__
	int n, m;
	cin>>n>>m;
	vector<vector<char>> mapa(n, vector<char>(m));
	vector<vector<bool>> seen(n, vector<bool>(m, false));
	vector<vector<char>> pai(n,vector<char>(m));
	queue<tuple<int, int, int>> q;
	int xA =-1, yA =-1;
	int xS =-1, yS =-1;
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) {
			cin >> mapa[i][j];
			if (mapa[i][j] == 'M') q.push({i, j, 0});
			if (mapa[i][j] == 'A') { xA = i; yA = j; }}
	q.push({xA, yA, 1});
	bool stp = false;
	while (!q.empty() && !stp) {
		auto u = q.front(); q.pop();
		int x = get<0>(u), y = get<1>(u), t = get<2>(u);
		if(seen[x][y]) continue;
		seen[x][y] = true;
		if ((x == n-1 || y == m-1 || x==0 || y==0) && t == 1) {xS = x; yS = y; stp = true; break;}
		if (x > 0 && !seen[x-1][y] && mapa[x-1][y] != '#') {q.push({x-1, y, t}); if(t==1) pai[x-1][y]='U';}
		if (x+1 < n && !seen[x+1][y] && mapa[x+1][y] != '#') {q.push({x+1, y, t}); if(t==1) pai[x+1][y]='D';}
		if (y+1 < m && !seen[x][y+1] && mapa[x][y+1] != '#') {q.push({x, y+1, t}); if(t==1) pai[x][y+1]='R';}
		if (y > 0 && !seen[x][y-1] && mapa[x][y-1] != '#') {q.push({x, y-1, t}); if(t==1) pai[x][y-1]='L';}}
	if(xS==-1 || yS==-1){cout<<"NO"; return 0;}
	cout<<"YES\n";
	string rota="";
	while(xS!=xA || yS!=yA){
		rota+=pai[xS][yS];
		switch(pai[xS][yS]){
			case 'L': yS+=1;break;
			case 'R': yS-=1;break;
			case 'D': xS-=1;break;
			case 'U': xS+=1;break;}}
	reverse(rota.begin(),rota.end());
	cout<<rota.size()<<"\n"<<rota;
return 0;}
