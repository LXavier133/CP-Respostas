#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF INT_MAX
typedef long long ll;

int main(){
	int n;cin>>n;
	int res=0;
	for(int i=0; i<n; i++){
		string a;cin>>a;
		bool ja=false;
		for(int j=1;j<n; j++){
			if(a[j]=='N' && a[j-1]=='N' && !ja){
				++res;
				ja=true;}
			else ja=false;}}
	cout<<res;
return 0;}
