#include <iostream>
using namespace std;

int main() {
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    char simboloAtual;
    int contaAbertura;
    int flag;
    while(!cin.eof()){
        contaAbertura = 0;
	flag=1;
        while((simboloAtual = cin.get()) != '\n' &&!cin.eof()) {
            if (simboloAtual == '(') {
                contaAbertura += 1;
            } else if (simboloAtual == ')' && contaAbertura > 0) {
                contaAbertura -= 1;
            }
	      else if (simboloAtual ==')'){flag=0;}
        }
	if(!cin.eof()){
	if(flag&&contaAbertura==0){
        cout<<"correct"<<endl;}
	else{cout<<"incorrect"<<endl;}
    }}
    return 0;
}
