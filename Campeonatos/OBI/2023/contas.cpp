#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
int main(){__
	int v;cin>>v;
	vector<int>contas(3);cin>>contas[0]>>contas[1]>>contas[2];
	sort(contas.begin(),contas.end());
	for(int i=0;i<3;i++){
		v-=contas[i];
		if(v<0){cout<<i<<endl;return 0;}}
	cout<<3<<endl;
return 0;}

