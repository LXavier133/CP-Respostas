#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;cin>>n>>a>>b;
    float k=b-a+1;
    int pos=0;
    deque<float> soma;
    soma.push_front(0);
    if(a!=0){
    while(pos<k){
        soma.push_front(1+(1+1/k)*soma.front());
        pos++;
    }
    while(pos<n-1){
        soma.push_front(1+(1/k)*(soma.front()-soma.back())+soma.front());
        soma.pop_back();
        pos++;
    }
    cout<<1+(1/k)*(soma.front()-soma.back())<<endl;return 0;}
    else{
     while(pos<k-1){
        soma.push_front(k/(k-1)+(1+1/(k-1))*soma.front());
        pos++;
    }
    while(pos<n-1){
        soma.push_front(k/(k-1)+(1/(k-1))*(soma.front()-soma.back())+soma.front());
        soma.pop_back();
        pos++;
    }
    cout<<k/(k-1)+(1/(k-1))*(soma.front()-soma.back())<<endl;return 0;}   
    
}
