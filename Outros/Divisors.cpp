#include <bits/stdc++.h>
using namespace std;
int main(){
 int n;cin>>n;
 stack<int> maior;
 queue<int> menor;
 for(int i=1;i*i<=n;i++){
  if(n%i==0){
  menor.push(i);
 if(i*i!=n) maior.push(n/i);}
}
while(!menor.empty()){
  cout<<menor.front()<<endl;
 menor.pop();}
while(!maior.empty()){
 cout<<maior.top()<<endl;
maior.pop();}}
