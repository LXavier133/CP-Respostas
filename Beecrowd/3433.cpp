#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
int main(){__
	map<int,int> deck;
	int nRound;cin>>nRound;
	int alvo;
	int maria=0;
	int joao=0;
	cin>>alvo;if(alvo<10)joao+=alvo;else joao+=10;deck[alvo]++;cin>>alvo;if(alvo<10)joao+=alvo;else joao+=10;deck[alvo]++;
	cin>>alvo;if(alvo<10)maria+=alvo;else maria+=10;deck[alvo]++;cin>>alvo;if(alvo<10)maria+=alvo;else maria+=10;deck[alvo]++;
	while(nRound--){cin>>alvo; if(alvo<10){maria+=alvo;joao+=alvo;}else{maria+=10;joao+=10;};deck[alvo]++;}
	while(joao>maria){
		if(deck[24-joao]<4){cout<<24-joao<<endl;return 0;}joao--;}
	if(23-maria!=10){if(deck[23-maria]<4){cout<<23-maria<<endl;return 0;}}
	else for(int i=10;i<14;i++) if(deck[i]<4){cout<i<<endl;return 0;}
	cout<<-1<<endl;
return 0;}

