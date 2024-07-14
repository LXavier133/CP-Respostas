#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
typedef long long ll;
int main(){__
	ll a, b; cin >> a >>b;
	stack<ll> pilha;
	pilha.push(b);
	while (b>0){
		if(b%2==0){b/=2;pilha.push(b);}
		else if(b%10==1){b/=10;pilha.push(b);}
		else break;
		if(b==a) break;}
	if(pilha.top()!=a){cout<<"NO";return 0;}
	cout<<"YES" fl<<pilha.size() fl;
	while(!pilha.empty()){cout<<pilha.top()<<" ";pilha.pop();}
return 0;}

