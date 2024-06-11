#include <iostream>
using namespace std;

int main() {
    int nCasos;
    cin >> nCasos;
    cin.ignore();
    for(int caso = 0; caso < nCasos; caso++) {
        char simboloAtual;
        int resultado = 0;
        int contaAbertura = 0;
        while((simboloAtual = cin.get()) != '\n') {
            if (simboloAtual == '<') {
                contaAbertura += 1;
            } else if (simboloAtual == '>' && contaAbertura > 0) {
                contaAbertura -= 1;
                resultado += 1;
            }
        }
        cout << resultado << endl;
    }
    return 0;
}
