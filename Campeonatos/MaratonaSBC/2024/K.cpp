#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	int n;cin>>n;
	vector<int> arr(n);
	int sum=0;
	for(int i=0; i<n; i++){
		int a;cin>>a;
		sum+=a;
		arr[i]=a;}
	if(sum%2==1){cout<<-1;return 0;}
	vector<bool> dp(sum/2+1, false);
	vector<vector<bool>> par(sum/2+1,vector<bool>(n,false));
	dp[0]=true;
	for(int i=0; i<n; i++) for(int j = sum/2; j>=arr[i]; j--) if(dp[j-arr[i]]){
		dp[j]=true;
		par[j]=par[j-arr[i]];
		par[j][i]=true;}
	if(!dp[sum/2]){cout<<-1;return 0;}
	queue<int> um,ou;
	for(int i=0; i<n; i++){
		if(par[sum/2][i]) um.push(arr[i]);
		else ou.push(arr[i]);}
	int umm=0,ouu=0;
	cout<<um.front()<<" ";
	umm=um.front();um.pop();
	while(true){
		if(um.empty()&&ou.empty()) break;
		if(umm>ouu || um.empty()){
			cout<<ou.front()<<" ";
			ouu+=ou.front();ou.pop();}
		else if(umm<=ouu || ou.empty()){
			cout<<um.front()<<" ";
			umm+=um.front();um.pop();}}
return 0;}

