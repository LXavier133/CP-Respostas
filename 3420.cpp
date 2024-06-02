#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
    long double c;cin>>c;
    long long res =floor((1/6+sqrt(1/36+2*c/3)));
    if(res*(3*res+1)/2>c) res--;
    cout<<res<<endl;
    }    
}
