#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;

int cmd(int t, int n){
	cout<<((t==0)? "L ":"C ")<<n<<"\n";
	int k;cin>>k;
	return k;
}

int main(){
	int N;cin>>N;
	for(int i=1; i<=N; i++){
		int k=cmd(0,i);
		if(2*k<N) cmd(0,i);
		else if(2*k==N){
			cmd(1,1);
			if(2*cmd(0,i)<N) cmd(0,i);
		}
	}
	for(int i=1; i<=N; i++){
		if(2*cmd(1,i)<N) cmd(1,i);
	}
	cout<<"FIM\n";
return 0;}

