#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
vector<int> centro;
vector<int> outro;
int val,iVal,mVal;
bool ini;


void dfs(int s){
	if(centro[s]!=-1){
		++val;
		dfs(centro[s]);}
	if(outro[s]!=-1){
		if(ini) {iVal=val;ini=false;}
		mVal=max(mVal,val);
		val=1;
		dfs(outro[s]);}}

int main(){__
	int n;cin>>n;
	centro.assign(n,-1);
	outro.assign(n,-1);
	int root=0;
	for(int i=0; i<n; i++){
		int a,b,c;cin>>a>>b>>c;
		root=root^b^c^(i+1);
		centro[a-1]=c-1;
		outro[a-1]=b-1;}
	val=1;ini=true;mVal=-1;
	dfs(root-1);
	if(ini) iVal=val;
	int ini1=iVal,max1=max(val,mVal);
	int m;cin>>m;
        centro.assign(m,-1);
        outro.assign(m,-1);
        root=0;
        for(int i=0; i<m; i++){
                int a,b,c;cin>>a>>b>>c;
                root=root^b^c^(i+1);
                centro[a-1]=b-1;
                outro[a-1]=c-1;}
        val=1;ini=true;mVal=-1;
        dfs(root-1);
	if(ini) iVal=val;
        int ini2=iVal,max2=max(val,mVal);
	cout<<n+m-max(min(ini1,max2),min(ini2,max1));

return 0;}

