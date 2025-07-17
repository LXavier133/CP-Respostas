#include<bits/stdc++.h>
using namespace std;

int sit,val;
vector<deque<int>> a(4,deque<int>());


int eval(char v, char n){
    if(n=='P' && v-'0'==4) return(14);
    else if(n=='C'&& v-'0'==7) return(13);
    else if(n=='E' && v=='A') return(12);
    else if(n=='O' && v-'0'==7) return(11);
    else if(v=='3') return(10);
    else if(v=='2') return(9);
    else if(v=='A') return(8);
    else if(v=='K') return(7);
    else if(v=='J') return(6);
    else if(v=='Q') return(5);
    else return ((v-'0')-3); 
}



void act(int x, int q){
    int jogado = 0;

    if(sit == q || a[x].back() <= val){
        jogado = a[x].front();
        a[x].pop_front();}
    else{
        jogado = a[x].back();
        a[x].pop_back();}

    if(jogado == val && sit != q){
        sit = 0;}
    else if(jogado > val){
        sit = q;
        val = jogado;}
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for(int i=0;i<3;i++){
        char v, n;cin>>v>>n;
        a[0].push_back(eval(v,n));
    }
    // for(auto i: a) cout<<i<<" ";
    // cout<<endl;
    for(int i=0;i<3;i++){
        char v, n;cin>>v>>n;
        a[1].push_back(eval(v,n));
    }
    // for(auto i: b) cout<<i<<" ";
    // cout<<endl;
    for(int i=0;i<3;i++){
        char v, n;cin>>v>>n;
        a[2].push_back(eval(v,n));
    }
    // for(auto i: c) cout<<i<<" ";
    // cout<<endl;
    for(int i=0;i<3;i++){
        char v, n;cin>>v>>n;
        a[3].push_back(eval(v,n));
    }
    sort(a[0].begin(),a[0].end());
    sort(a[1].begin(),a[1].end());
    sort(a[2].begin(),a[2].end());
    sort(a[3].begin(),a[3].end());
    // for(auto i: d) cout<<i<<" ";
    // cout<<endl;
    for(int i=0; i<3; i++){
        sit=0;val=0;
        act(0,1);
        act(1,2);
        act(2,1);
        act(3,2);
        cout<<sit<<" ";

        // for(auto i: b) cout<<i<<" ";
        // cout<<endl;
    }


    return 0;
}
