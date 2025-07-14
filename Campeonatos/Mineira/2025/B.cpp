#include<bits/stdc++.h>
using namespace std;

template<typename T> int lis(vector<T> &v){
    vector<int>ans;
    for(T t: v){
        auto it = upper_bound(ans.begin(),ans.end(),t.second);
        if(it==ans.end()) ans.push_back(t.second);
        else *it=t.second;
    }
    return ans.size();
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;cin>>n;   
    int x0=0;
    vector<pair<int,int>> lar;
    for(int i=0; i<n; i++){
        int x,t;cin>>x>>t;
        if(t==0) x0=x;
        lar.push_back({x,t});
    }
    for(int i=0; i<n; i++) lar[i]={lar[i].second-lar[i].first+x0,lar[i].first-x0+lar[i].second};
    sort(lar.begin(),lar.end());
    cout<< lis<pair<int,int>>(lar);


    return 0;
}
