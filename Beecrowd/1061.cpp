#include <bits/stdc++.h>

// NAO FINALIZADO

using namespace std;

typedef long long int ll; // Opcional
typedef long double ld;

int main() {
    ios::sync_with_stdio(0); // Opcional
    cin.tie(0); // Opcional

    string label;
    char separador;
    ld dia1, h1, m1, s1, dia2, h2, m2, s2;

    cin >> label >> dia1;
    cin >> h1 >> separador >> m1 >> separador >> s1;

    cin >> label >> dia2;
    cin >> h2 >> separador >> m2 >> separador >> s2;

    ll diffDias = 60 * 60 * 24 * (dia2 - dia1); // segundos


    cout << diffDias;
    
    return 0;
}