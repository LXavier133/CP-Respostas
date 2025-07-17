#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	int n,p;cin>>n>>p;
	vector<vector<int>> black(n+1,vector<int>(n+1,0)), white(n+1,vector<int>(n+1,0)),board(n,vector<int>(n,0));
	for(int i=0; i<p; i++){
		int x,y;cin>>x>>y;
		board[x-1][y-1]=1;}
	for(int i=0; i<p; i++){
		int x,y;cin>>x>>y;
		board[x-1][y-1]=-1;}
	for(int i=1; i<=n; i++) for(int j=1; j<=n; j++){
		int b=0,w=0;
		if(board[i-1][j-1]==1) b=1;
		if(board[i-1][j-1]==-1) w=1;
		black[i][j]=black[i-1][j]+black[i][j-1]-black[i-1][j-1]+b;
		white[i][j]=white[i-1][j]+white[i][j-1]-white[i-1][j-1]+w;}
	int rBlack=0,rWhite=0;
	for(int k=2; k<=n; k++) for(int j=k; j<=n; j++) for(int i=k; i<=n; i++){
		int b=black[i][j]-black[i][j-k]-black[i-k][j]+black[i-k][j-k];
		int w=white[i][j]-white[i][j-k]-white[i-k][j]+white[i-k][j-k];
		if(b==0 && w!=0) ++rWhite;
		if(w==0 && b!=0) ++rBlack;}
	cout<<rBlack+p SS rWhite+p;
return 0;}

