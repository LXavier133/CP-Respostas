#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
int main(){__
	char estado;
	int nVit=0;
	for(int i=0;i<6;i++) if(cin>>estado,estado=='V') nVit++;
	if(nVit==0){cout<<-1<<endl;return 0;}
	cout<<3-(nVit-1)/2<<endl;
return 0;}

