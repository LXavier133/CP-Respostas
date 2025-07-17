#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
int main(){__
int nNota,K;cin>>nNota>>K;
vector<int> notas(nNota);
for(int i=0;i<nNota;i++) cin>>notas[i];
sort(notas.begin(),notas.end());
cout<<notas[nNota-K]<<endl;
return 0;}

