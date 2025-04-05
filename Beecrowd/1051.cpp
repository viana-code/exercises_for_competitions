// Estrutura para iniciantes

#include <iostream>

using namespace std;

int main() {
    double v, imposto = 0;

    cin >> v;

    if(v > 2000 && v <= 3000) {
        imposto = (v - 2000) * 0.08;
    } else if(v > 3000 && v <= 4500) {
        imposto = (1000 * 0.08) + ((v - 3000) * 0.18);
    } else if(v > 4500) {
        imposto = (1000 * 0.08) + (1500 * 0.18) + ((v - 4500) * 0.28);
    }

    cout << fixed;
    cout.precision(2);


    if(v < 2000) cout << "Isento" << endl;
    else cout << "R$ " << imposto << endl;

    return 0;
}
