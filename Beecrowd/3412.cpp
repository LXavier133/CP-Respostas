#include<bits/stdc++.h>
using namespace std;
using ld = long double;
int main(){
    int n; cin>>n;
    cin.ignore();
    for(int i = 0;i<n;i++){
        string s; getline(cin,s);
        cout<<s<<": ";
        ld min=100000;
        getline(cin,s);
        istringstream iss(s);
        ld nota;
        ld val=0;
        int tam=0;
        while (iss>>nota){
            min= (min<nota)? min:nota;
            val+=nota;
            tam++;}
        if(tam<3) cout<<round(10*val/2)/10<<endl;
        else if (tam==3) cout<<round(10*val/3)/10<<endl;
        else if (tam==4) cout<<round(10*(val-min)/3)/10<<endl;}}
