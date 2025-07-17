#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;


int   vp[1000002];
int divi[1000002];
 
void crivo(){
	for(int i=1; i<=1000001; i++) divi[i]=1;
	for(int i=2; i<=1000001; i++) if(divi[i]==1) for(int j=i; j<=1000001; j+=i) divi[j]=i;}
 
void fact(vector<int> &v, int n){
	if(n != divi[n]) fact(v,n/divi[n]);
	if(divi[n] != divi[n/divi[n]]) v.push_back(divi[n]);}

int main(){__
	crivo();
	int n;cin>>n;
	vector<int> v;
	fact(v,n);
	cout<<v.size() fl;
	for(auto u: v){
		cout<<"1 "<<n/u fl;	
	}
	
		
	
	
return 0;}
