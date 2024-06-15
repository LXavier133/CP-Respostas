#include <bits/stdc++.h>
using namespace std;
int main(){
    int tab[10][10]={{}};
    int nNavio;cin>>nNavio;
    while(nNavio--){
        int pos,tam,x,y;cin>>pos>>tam>>x>>y;
        int sx,sy;
        if(!pos){sx=0;sy=1;}
        else{sx=1;sy=0;}
        for(int i=0;i<tam;i++){
            if(x>10 || y>10){cout<<"N"<<endl;return 0;}
            if(tab[x-1][y-1]){cout<<"N"<<endl;return 0;}
            else {tab[x-1][y-1]=1;}
            x+=sx;
            y+=sy;
        }
    }
    cout<<"Y"<<endl;return 0;
}
