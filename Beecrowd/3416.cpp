#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,l,d;cin>>n>>l>>d;
    int x=1+(n*d-1)/(l*1000);
    cout<<x*l<<endl;
    return 0;
}
