#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int xMax,yMax;
bool absu = true;
vector<vector<vector<int>>> seen;
vector<vector<char>> mapa;
void roda(int x, int y,int dir,int lad){
                if(x>=xMax || y>=yMax || x<0 || y<0) return;
                if(seen[x][y][dir]) return;
                seen[x][y][dir]=true;
                if(mapa[x][y]=='>') roda(x+1,y,1,1);
                if(mapa[x][y]=='<') roda(x-1,y,1,-1);
                if(mapa[x][y]=='^') roda(x,y-1,0,-1);
                if(mapa[x][y]=='v') roda(x,y+1,0,1);
                if(mapa[x][y]=='*') {absu=false;return;}
                if(mapa[x][y]=='.'){
                        if(dir==0) roda(x,y+lad,dir,lad);
                        if(dir==1) roda(x+lad,y,dir,lad);}}

int main(){__
        cin>>xMax>>yMax;
        mapa.assign(xMax,vector<char>(yMax));
        seen.assign(xMax,vector<vector<int>>(yMax,vector<int>(2,false)));
        for(int j=0; j<yMax; j++) for(int i =0; i<xMax; i++) cin>>mapa[i][j];
        roda(0,0,1,1);
        if(absu) cout<<"!\n";
        else cout<<"*\n";
return 0;}

