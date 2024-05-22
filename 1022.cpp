#include <iostream>
#include <algorithm>
using namespace std;

void oreduzFrac(int m, int n){
    int d = __gcd(m,n);
    if(m/d>0&&n/d<0){m=-m;n=-n;}
    cout << m/d << "/" << n/d << endl;
}

int main() {
    int nCasos;
    cin >> nCasos;
    for(int i = 0; i < nCasos; i++){
        int x, y, z, w;
        char op, slash;
        cin >> x>>slash >> y >> op >> z>>slash>> w;
        if(op == '+') { x = x * w + z * y; y = y * w; }
	else  if(op == '-') { x = x * w - z * y; y = y * w; }
	else if(op == '/') { x = x * w; y = y * z; }
	else if(op == '*') { x = x * z; y = y * w; }
	else{cout<<op;return 0;}
        cout << x << "/" << y << " = ";
        oreduzFrac(x, y);
    }
    return 0;
}
