#include <bits/stdc++.h>
using namespace std;
int main(){
    int nCaixa;cin>>nCaixa;
    stack<int> valorCaixa;
    for(int i=0;i<nCaixa;i++){
        int var;cin>>var;valorCaixa.push(var);
    }
    int val=0;
    for(int i=0;i<nCaixa;i++){
        val=max(0,val+valorCaixa.top());
        valorCaixa.pop();
    }
    cout<<val+100<<endl;return 0;
}
