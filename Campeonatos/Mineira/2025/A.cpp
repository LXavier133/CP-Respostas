#include<bits/stdc++.h>
using namespace std;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    vector<int> a(n,0);
    a[n-1]=2;a[0]=1;
    int qual=3;
    priority_queue<pair<int,pair<int,int>>> pq;
    pq.push({(n-2)/2,{-0,1-n}});
    while(!pq.empty()){
        auto top=pq.top();pq.pop();
        int l=-top.second.first;
        int r=-top.second.second;
        if(r>l+1){
            a[(l+r)/2]=qual++;
            pq.push({((l+r)/2-l-2)/2,{-l,-(l+r)/2}});
            pq.push({(r-(l+r)/2-2)/2,{-(l+r)/2,-r}});}
    }
   for(int i=0; i<n; i++) cout<<a[i]<<" ";
   return 0;
}
