// OBI - https://olimpiada.ic.unicamp.br/pratique/pj/2021/f2/potencia/
#include <bits/stdc++.h>

using namespace std;

#define int long long int
#define faster ios::sync_with_stdio(0); cin.tie(0);

int32_t main() { faster
    int n, resultadoFinal = 0;
    string valor;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> valor;

        int expoente = valor.back() - '0';
        valor.pop_back(); // apaga o ultimo caractere
        int base = stoi(valor);

        // Calcula a potencia
        int resultPotencia = 1;
        if(expoente != 0) {
            for(int j = 0; j < expoente; j++) {
                resultPotencia *= base;
            }
        }

        resultadoFinal += resultPotencia;
    }

    cout << resultadoFinal << endl;
    
    return 0;
}