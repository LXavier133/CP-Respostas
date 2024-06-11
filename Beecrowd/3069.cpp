#include <bits/stdc++.h>
using namespace std;
int main(){
 int tamanhoPraia=-1; int numSorveteiro=-1;
 int inicio; int fim;
 int numTeste=1;
 cin>>tamanhoPraia>>numSorveteiro;
 while(tamanhoPraia !=0 && numSorveteiro !=0){
 tamanhoPraia+=1;
 vector<int> praia(tamanhoPraia, 0);
 for(int i=0; i<numSorveteiro;i++){
  cin>>inicio>>fim;
  praia[inicio]+=1;
  praia[fim]+=-1;
 }
 int inicioIntervalo=-1;
 int totalSoma=0;
 cout << "Teste " << numTeste++<<endl;
 for(int i=0; i<tamanhoPraia;i++){
  totalSoma+=praia[i];
  if(totalSoma>=1 && inicioIntervalo==-1){inicioIntervalo=i;}
  else if(totalSoma==0 && inicioIntervalo !=-1){cout<<inicioIntervalo<<" "<<i<<endl;inicioIntervalo=-1;}
 }
 cin>>tamanhoPraia>>numSorveteiro;
 cout<<endl;
}return 0;}
