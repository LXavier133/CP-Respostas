#include <bits/stdc++.h>
using namespace std;
int main(){
    int nCasa;
    int casa;
    int sumBrinquedo;
    deque<int> casas;
    cin>>nCasa;
    for (int i=0; i<nCasa;i++){
	 cin>>casa;
     casas.push_front(casa);	}
    cin>>sumBrinquedo;
    while (true) {
        if (casas.back() + casas.front() == sumBrinquedo) {
        cout<<casas.back()<<" "<<casas.front()<<endl;	
	return 0;
        } else if (casas.back() + casas.front() > sumBrinquedo) {
            casas.pop_front();
        } else {
            casas.pop_back();
        }
    }
}
