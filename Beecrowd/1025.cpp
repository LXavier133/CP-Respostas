#include <bits/stdc++.h>
using namespace std;

int main() {
    int tamanhoPedra;
    int nConsulta;
    int nCaso = 0;
    
    while (cin >> tamanhoPedra >> nConsulta && tamanhoPedra != 0 && nConsulta != 0) {
        cout << "CASE# " << ++nCaso << ":\n";
        vector<int> pedras(tamanhoPedra);
        
        for (int i = 0; i < tamanhoPedra; i++) {
            cin >> pedras[i];
        }
        
        sort(pedras.begin(), pedras.end());
        
        for (int i = 0; i < nConsulta; i++) {
            int consulta;
            cin >> consulta;
            auto it = find(pedras.begin(), pedras.end(), consulta);
            if (it != pedras.end()) {
                cout << consulta << " found at " << distance(pedras.begin(), it) + 1 << endl;
            } else {
                cout << consulta << " not found" << endl;
            }
        }
    }
    
    return 0;
}
