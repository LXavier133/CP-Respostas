#include <bits/stdc++.h>
using namespace std;
int main(){
	int nCaso;cin>>nCaso;
	while(nCaso--){
	int n;cin>>n;
     	int res=0;
        for(int i=1;i*i<=n;i++)if(n%i==0){res++;if(i*i!=n) res++;}
        cout<<res<<endl;}
        return 0;}


