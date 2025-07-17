#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
#define double long double
#define int long long
signed main(){__
	int n;cin>>n;
	int d[30], p[30], c[30], l[30],r[30];
	double x[30];
	for(int i=0; i<n; i++){
		cin>>d[i]>>p[i]>>c[i];
		int a,b;cin>>a>>b;
		x[i]=1.0L*(a+b)/2;
		cin>>l[i]>>r[i];
	}
	vector<double> dp((1<<n),0);
	for(int i=1; i<(1<<(n)); i++){
		int time=0;
		for(int j=0; (1<<j) <=i; j++) if(i&(1<<j)) time+=c[j];
		for(int j=0; (1<<j)<=i; j++) if(i&(1<<j)){
			double gain = 0;
			if(time<=d[j]){
				gain+=p[j];
				if(time<l[j] || (time==l[j] && time==r[j])) gain+=x[j];
				else if(time >= l[j] && time <= r[j]) gain+=1.0L*x[j]*(r[j]-time)/(r[j]-l[j]);
			}
			dp[i]=max(dp[i],dp[i-(1<<j)]+gain);
		}
	}
	cout<<fixed<<setprecision(12)<<dp[(1<<n)-1];
return 0;}

