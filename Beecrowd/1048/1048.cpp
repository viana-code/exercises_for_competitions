#include <bits/stdc++.h>

using namespace std;

int main() {
    float v, salarioFinal;
    int reajuste;

    cin >> v;

    if(v >= 0 && v <= 400) reajuste = 15;
    else if(v > 400 && v <= 800) reajuste = 12;
    else if(v > 800 && v <= 1200) reajuste = 10;
    else if(v > 1200 && v <= 2000) reajuste = 7;
    else reajuste = 4;

    salarioFinal = v + ((v * reajuste) / 100);

    cout << fixed << setprecision(2);
    cout << "Novo salario: " << salarioFinal << endl;
    cout << "Reajuste ganho: " << (v * reajuste) / 100 << endl;
    cout << "Em percentual: " << reajuste << " %" << endl;

    return 0;
}