#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;

vector<int> prefix_function(string s) {
    int n = (int)s.length();
    vector<int> pi(n);
    for (int i = 1; i < n; i++) {
        int j = pi[i-1];
        while (j > 0 && s[i] != s[j])
            j = pi[j-1];
        if (s[i] == s[j])
            j++;
        pi[i] = j;
    }
    return pi;
}

void solve(string s){
	string t;cin>>t;
	int n = (int) s.length();
	t=s+"#"+t;
	int ans = 0;
	vector<int> pi = prefix_function(t);
	for(int i=n; i< (int) t.length(); i++) if(pi[i]==n) ans++;
	if(ans*n== (int) t.length()-n-1) cout<<"Yes\n";
	else cout<<"No\n";
}
	

int main(){__
	string s; cin>>s;
	int t; cin>>t;
	for(int i=0; i<t; i++) solve(s);
return 0;}

