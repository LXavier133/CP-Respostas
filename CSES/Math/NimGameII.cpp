#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
typedef long long ll;
int main(){__
int n;cin>>n;
        while(n--){
                int t; cin>>t;
                int res=0;
                while(t--){int a;cin>>a;res^=(a%4);}
                cout<<(res!=0? "first\n":"second\n");}
return 0;}

