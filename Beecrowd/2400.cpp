#include <iostream>
using namespace std;

#define GRANDE 100000

void merge(int *contador,int alvo[], int inicio, int fim) {
    int tamanhoAuxiliar = 0;
    int arrayAuxiliar[GRANDE];
    int iteradorEsquerda = inicio;
    int iteradorDireita = inicio + (fim - inicio) / 2 + 1;

    while (iteradorEsquerda <= inicio + (fim - inicio) / 2 && iteradorDireita <= fim) {
        if (alvo[iteradorEsquerda] <= alvo[iteradorDireita]) {
            arrayAuxiliar[tamanhoAuxiliar] = alvo[iteradorEsquerda];
            iteradorEsquerda++;
            tamanhoAuxiliar++;
        } else {
            arrayAuxiliar[tamanhoAuxiliar] = alvo[iteradorDireita];
            iteradorDireita++;
            tamanhoAuxiliar++;
	    *contador=*contador +(inicio + (fim - inicio) / 2 - iteradorEsquerda + 1);
        }
    }

    while (iteradorEsquerda <= inicio + (fim - inicio) / 2) {
        arrayAuxiliar[tamanhoAuxiliar] = alvo[iteradorEsquerda];
        iteradorEsquerda++;
        tamanhoAuxiliar++;
    }
    while (iteradorDireita <= fim) {
        arrayAuxiliar[tamanhoAuxiliar] = alvo[iteradorDireita];
        iteradorDireita++;
        tamanhoAuxiliar++;
    }
    for (int iteradorRealocar = 0; iteradorRealocar < tamanhoAuxiliar; iteradorRealocar++) {
        alvo[inicio + iteradorRealocar] = arrayAuxiliar[iteradorRealocar];
    }
}

int mergeSort(int alvo[], int inicio, int fim) {
    if (inicio < fim) {
	int contador = mergeSort(alvo, inicio, inicio + (fim - inicio) / 2)+ mergeSort(alvo, inicio + (fim - inicio) / 2 + 1, fim);
        merge(&contador,alvo, inicio, fim);
	return contador;
    }
    return 0;
}

int main() {
    int numInversao =0;
    int tamanhoInput;
    cin>>tamanhoInput;
    int input[tamanhoInput];
    for (int i = 0; i < tamanhoInput; i++) {
        cin>>input[i];
    }
    cout<<mergeSort(input,0,tamanhoInput-1)<<endl;
    return 0;
}
