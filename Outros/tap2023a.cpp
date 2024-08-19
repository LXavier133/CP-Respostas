#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF INT_MAX
typedef long long ll;

vector<int> teste;;

int solve(int a){
	auto ub=upper_bound(teste.begin(),teste.end(),a);
	if(ub==teste.begin()) return a;
	return solve(a%(teste[ub-teste.begin()-1]));}

int main(){__
	int n,m;cin>>n>>m;
	vector<int> ei(n);
	for(int i=0; i<n; i++) cin>>ei[i];
	int low=INF;
	for(int i=0; i<m; i++){
		int a;cin>>a;
		if(a<low){
			low=a;
			teste.push_back(a);}}
	sort(teste.begin(),teste.end());
	for(int i : ei) cout<<solve(i) << " ";
return 0;}
