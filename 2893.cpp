#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base :: sync_with_stdio (false );
    cin.tie( nullptr );
	int ordemFibo;
	int posFibo;
	int nCasos;
	cin>>nCasos;
	for(int i=0;i<nCasos;i++){
	cin>>ordemFibo>>posFibo;
	deque<int>sumFibo;
	for(int i=0;i<ordemFibo;i++){
		sumFibo.push_front((i*(i+1)/2)%1000007);	
	}
	sumFibo.push_front(2*sumFibo.front());
	if(posFibo<=ordemFibo){cout<<posFibo-1<<endl;}
	else if(posFibo==ordemFibo+1){cout<<ordemFibo*(ordemFibo-1)/2<<endl;}
	else{
	for(int i=ordemFibo+2;i<posFibo;i++){
		sumFibo.push_front((2*sumFibo.front()-sumFibo.back())%1000007);
		sumFibo.pop_back();
	}
	int resultado=(sumFibo.front()-sumFibo.back())%1000007;
	if(resultado<0){resultado+=1000007*((-resultado)/1000007+1);}
	cout<<resultado<<endl;
}}return 0;}
