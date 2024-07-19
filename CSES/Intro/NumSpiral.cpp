#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define mn(x,y) x>y? y:x
#define mx(x,y) x>y? x:y
typedef unsigned long long ull;
int main(){__
ull t;cin>>t;while(t--){
	ull y,x;cin>>y>>x;
	cout << (max(x,y)%2 ? (max(x,y)-1*(min((max(x,y)-x),1ULL)))*(max(x,y)-1*(min((max(x,y)-x),1ULL)))+min((max(x,y)-x),1ULL)*(1+2*(min(x,y)-1ULL))+1-min(x,y) : (max(x,y)-1*(min((max(x,y)-y),1ULL)))*(max(x,y)-1*(min((max(x,y)-y),1ULL)))+min((max(x,y)-y),1ULL)*(1+2*(min(x,y)-1))+1-min(x,y)) fl;}
return 0;}

