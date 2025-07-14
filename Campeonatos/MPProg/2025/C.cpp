#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
 
void solve(int x, int y){
	if ((x>=0 && y>=0 && x+y<=100)
	|| (x<=0 && y<=0 && x+y>=-100)
	|| (x>=0 && x<=100 && y<=0 && y>=-100)
	|| (x<=0 && x>=-100 && y>=0 && y<=100)
	|| (x<=-100 &&  y>=0 && x-y>=-200)
	|| (x>=100 && y<=0 && x-y<=200))
		cout<<"S\n";
	else
		cout<<"N\n";
	return;}
 
int main(){__
	int n;
	cin>>n;
	while(n--){
		int x,y;cin>>x>>y;
		solve(x,y);}
return 0;}
