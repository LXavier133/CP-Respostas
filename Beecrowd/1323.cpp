#include <iostream>
using namespace std;

int main() {
    float n;
    do {
        cin >> n;
        if (n != 0.0) {
            cout << n * (n + 1) * (2 * n + 1) / 6 << "\n";
        }
    } while (n != 0.0);
    return 0;
}
