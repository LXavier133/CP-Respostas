#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll minDiv(ll b){
    for(ll i=2; i*i<=b; i++)if(b%i==0)return i;
    return b;
}

int main(){
int t;cin>>t;while(t--){
    ll a,b;cin>>a>>b;
    if(a==b) cout<<"0\n";
    else if(b%a==0) cout<<b<<"\n";
    else if(__gcd(a,b)!=1) cout<<a+b<<"\n";
    else{
    ll res=a*b;
    ll x=minDiv(a),y=minDiv(b);
    res=min(a+x*y+b,res);
    res=min(a+x*b,res);
    res=min(a*y+b,res);
    res=min(a+2*x+2*b,res);
    res=min(2*a+2*y+b,res);
    res=min(a+2*x+2*y+b,res);
    res=min(2*a+2*b,res);
    cout<<res<<"\n";
}}}
