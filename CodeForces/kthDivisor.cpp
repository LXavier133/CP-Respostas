#include <bits/stdc++.h>
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
using namespace std;
int main(){__
	int n,k;cin>>n>>k;
	vector<int> divisores;
	for(int i=1;i*i<=n;i++)
 		if(n%i==0){
		divisores.push_back(i);
		if(i*i!=n) divisores.push_back(n/i);}
	sort(divisores.begin(),divisores.end());
	if(divisores.size()>=k) cout<<divisores[k-1] fl;
	else cout<<-1 fl;
	return 0;}

