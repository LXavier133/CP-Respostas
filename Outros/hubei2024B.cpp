#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF DBL_MAX
#define SS <<" "<<
typedef long long ll;

typedef struct{
        int x;
        int y;}P;

double area(P a, P b, P c){return abs(a.x*b.y+b.x*c.y+c.x*a.y-a.y*b.x-b.y*c.x-c.y*a.x)/(double(2));}

double mnm(double a, double b){return (a<b)? a:b;}

int main(){
int t;cin>>t;while(t--){
        int n;cin>>n;
        vector<P> ls(n);
        for(int i=0; i<n;i++){
                int x,y;cin>>x>>y;
                ls[i].x=x;ls[i].y=y;}
       	double ans=INF;
        for(int i=0; i<n; i++) for(int j=i+1; j<n; j++) for(int k=j+1;k<n; k++){
                double ar=area(ls[i],ls[j],ls[k]);
		if(ar>0.00000001) ans=mnm(ans,ar);}
        if(ans<INF) cout<<fixed<<setprecision(12)<<ans fl;
        else cout<<"-1\n";}
return 0;}
