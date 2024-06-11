#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
bool vale(long long b){
        if(b%3==0) return true;
        while(b!=0){
                if(b%10==3) return true;
                b=b/10;}
        return false;}
int main(){__
        vector<long long>three(60,-1);
        long long atual;
        long long a=0;long long b=1; long long c;
        long long foi=0;
        while(cin>>atual){
                while(three[atual-1]==-1){
                        if(vale(b)) three[foi++]=b;
                        c=a+b;
                        a=b;
                        b=c;}
                cout<<three[atual-1]<<endl;}

return 0;}

