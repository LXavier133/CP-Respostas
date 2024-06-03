#include <bits/stdc++.h>
using namespace std;
int main(){//freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
        bool primeiro=true;
        while(1){
                unordered_map<int,int> mapa;
                char alvo;
                bool naoComeco=false;
                while(cin.get(alvo)&&alvo!='\n') mapa[(int) alvo]++;
                if (cin.eof()){cout<<endl;return 0;}
                if (primeiro) primeiro=false;
                else cout<<endl<<endl;
                map<int,set<int>> mapaFinal;
                for(auto i=mapa.begin();i!=mapa.end();i++){mapaFinal[(*i).second].insert((*i).first);}
                for(auto j=mapaFinal.begin();j!=mapaFinal.end();j++){
                        for(auto k=(*j).second.rbegin();k!=(*j).second.rend();k++){
                                if (naoComeco) cout<<endl;
                                else naoComeco =true;
                                cout<<*k<<" "<<(*j).first;}}
}}

