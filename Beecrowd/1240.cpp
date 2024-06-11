#include <bits/stdc++.h>
using namespace std;
bool check(long long grande,long long pequeno){
        int p=1;
        if (grande >=pequeno){
                while(pequeno/(pow(10,p-1))>=1){
                        if (pequeno%int(pow(10,p))!=grande%int(pow(10,p))){
                                return false;
                                }
                        p++;
                }
                return true;
        }
        else {return false;}
}

int main(){
	int n;
        long long grande;
        long long pequeno;
        cin >> n;
        for(int i=0;i<n;i++){
                cin >> grande >> pequeno;
                if (check(grande,pequeno)){cout << "encaixa" << endl;}
                else {cout<<"nao encaixa"<<endl;}}
return 0;}
