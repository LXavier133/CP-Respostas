#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;



int main(){__
        int a,b;cin>>a>>b;
        vector<pair<int,int>> lis;
        for(int i=0; i<a*b; i++){
                string ei;cin>>ei;
                if(ei[1]=='V') lis.push_back({1,ei[0]-'0'});
                else lis.push_back({0,ei[0]-'0'});}
        sort(lis.rbegin(),lis.rend());
        for(auto u: lis){
                if(u.first==0){cout<<u.second<<"D\n";}
                else{cout<<u.second<<"V\n";}}
return 0;}

