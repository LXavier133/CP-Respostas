#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
int main(){__
	int nLetras;cin>>nLetras;
	char alvo;
	bool seqA=false;
	int qnts=0;
	bool segunda=false;
	while(nLetras--){
		cin>>alvo;
		if(alvo=='a'){
			if(seqA){qnts++;if(segunda){segunda=false;qnts++;}}
			else {seqA=true;segunda=true;}}
		else seqA=false;}
	cout<<qnts<<endl;
return 0;}

