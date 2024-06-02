#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
int resolve(int m, int l, int n, vector<int>tab){
	if(m*100%l!=0) return 0;
	m=m*100/l;
	int jaFoi=0;
	int usou=0;
	int i1=0;
	int i2=tab.size()-1;
	while(true){
		if(jaFoi==m) break;
		if(i1>=i2&&i2!=0) return 0;
		if(tab[i2]==n){i2--;usou++;jaFoi++;}
		else if(tab[i2]+tab[i1]>n) i2--;
		else if(tab[i2]+tab[i1]<n) i1++;
		else {i1++;i2--;usou+=2;jaFoi++;}}
	return usou;}
	
int main(){__
	int m,n;cin>>m>>n;
	while(m||n){
		int l;cin>>l;
		int nTab;cin>>nTab;
		vector<int> tab(nTab);
		for(int i=0;i<nTab;i++) cin>>tab[i];
		sort(tab.begin(),tab.end());
		int n1,n2;
		n1=resolve(m,l,n,tab);
		n2=resolve(n,l,m,tab);
		if(n1==0 && n2==0) cout<<"impossivel"<<endl;
		else if((n1!=0 && n2==0) || (n2!=0 && n1==0)) cout<<((n1>n2)? n1:n2) <<endl;
		else cout<<((n1>n2)? n2:n1) <<endl;
		cin>>m>>n;}
return 0;}

