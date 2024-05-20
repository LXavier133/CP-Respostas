#include <bits/stdc++.h>
using namespace std;
int main(){
set <string> joias;
string joia;
while(!cin.eof()){
cin>>joia;
joias.insert(joia);
}
cout<<joias.size()<<endl;
return 0;}
