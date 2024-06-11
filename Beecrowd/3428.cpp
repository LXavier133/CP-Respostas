#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int nBalao;
    cin >> nBalao;

    unordered_map<int, int> alturaFlechas;
    int nFlexa = 0;

    for (int i = 0; i < nBalao; i++) {
        int altura;
        cin >> altura;
        if (alturaFlechas[altura] > 0) {
            alturaFlechas[altura]--;
            nFlexa--;
        }
        alturaFlechas[altura - 1]++;
        nFlexa++;
    }

    cout << nFlexa << endl;

    return 0;
}
