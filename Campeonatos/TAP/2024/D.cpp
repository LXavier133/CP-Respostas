#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;

bool win(int a, int b, int c){
	if(a<b+c) return false;
	return true;
}

int main(){__
	int a,b,c;cin>>a>>b>>c;
	if(win(a,b,c) || win (b,a,c) || win(c,a,b)) cout<<"S";
	else cout<<"N";
return 0;}

