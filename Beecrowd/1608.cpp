#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__ ll t;cin>>t;while(t--){
        ll d,i,b;cin>>d>>i>>b;
        vector<ll> ing(i);
        for(ll k=0; k<i; k++) cin>>ing[k];
        vector<ll> bolo(b);
        for(ll j=0; j<b; j++){
                ll qi;cin>>qi;
                for(ll k=0; k<qi; k++){
                        ll qq,pp;cin>>qq>>pp;
                        bolo[j]+=ing[qq]*pp;}}
        sort(bolo.begin(),bolo.end());
        cout<<d/bolo[0] fl;}
return 0;}

