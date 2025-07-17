#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
#define int long long
typedef long long ll;
int matrix[1000][1000];
vector<pair<int,int>> spOrd;

int MSS (int n){
    int mss=0;
    for(int trans = 0; trans != 2; trans++) for(int refX = 0; refX!=2; refX++) for(int refY = 0; refY!=2; refY++){
    int aux = 0;
    for(auto p : spOrd){
	int x=p.first;
	int y=p.second;
	if(trans) swap(x,y);
	if(refX) x=n-1-x;
	if(refY) y=n-1-y;
        aux = max(aux + matrix[x][y], matrix[x][y]);
        mss = max(mss, aux);
    }}
    return mss;
}


void spiral(int n) {
	int bline=0, eline=n-1, bcol=0, ecol=n-1;
	
	while (bline<=eline && bcol<=ecol) {
		for (int i = bcol; i <= ecol; i++) spOrd.push_back({bline,i});
		bline++;
		for (int i = bline; i <= eline; i++) spOrd.push_back({i,ecol});
		ecol--;
		
		if (bline <= eline) {
			for (int i = ecol; i >= bcol; i--) spOrd.push_back({eline,i});
			eline--;
		}
		
		if (bcol <= ecol) {
			for (int i = ecol; i >= bline; i--) spOrd.push_back({i,bcol});
			bcol++;
		}
	}
}

signed main(){__
	int n;cin>>n;
	spiral(n);
	for(int i=0; i<n; i++) for(int j=0; j<n; j++) cin>>matrix[i][j];
	cout<<MSS(n);
return 0;}

