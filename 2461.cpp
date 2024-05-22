#include <iostream>
#include <algorithm>

using namespace std;

int somaEmB(int alvo, int tamanhoX, int X[]) {
    int iteradorEsquerda = 0;
    int iteradorDireita = tamanhoX - 1;
    while (iteradorEsquerda <= iteradorDireita) {
        if (X[iteradorEsquerda] + X[iteradorDireita] == alvo) {
            return 1;
        } else if (X[iteradorEsquerda] + X[iteradorDireita] > alvo) {
            iteradorDireita -= 1;
        } else {
            iteradorEsquerda += 1;
        }
    }
    return 0;
}

int main() {
    int tamanhoA, tamanhoB;
    cin >> tamanhoA >> tamanhoB;
    int A[tamanhoA];
    int B[tamanhoB];
    int bEmA[tamanhoB];
    for (int iterador = 0; iterador < tamanhoA; iterador++) {
        cin >> A[iterador];
    }
    for (int iterador = 0; iterador < tamanhoB; iterador++) {
        cin >> B[iterador];
        bEmA[iterador] = B[iterador];
    }
    sort(bEmA, bEmA + tamanhoB);
    for (int iterador = 0; iterador < tamanhoB; iterador++) {
        if (find(A, A + tamanhoA, B[iterador]) == A + tamanhoA && !somaEmB(B[iterador], tamanhoB, bEmA)) {
            cout << B[iterador] << endl;
            return 0;
        }
    }
    cout << "sim" << endl;
    return 0;
}
