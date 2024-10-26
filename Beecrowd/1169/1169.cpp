#include <bits/stdc++.h>

using namespace std;

// ----- NAO RECURSIVA -----

typedef unsigned long long int ll;


// converte de graos para Kg
ll graos_para_grama(ll soma) {
    return soma * (0.001/12);
}

// Funcao da logica do pagamento
ll pagamento(ll x) {
    ll soma = 0;

    for(ll i = 0; i < x; i++) {
        soma += pow(2, i);
    }

    return soma;
}

int main() {
    ll x;
    int n;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x;

        int result = pagamento(x);

        cout << graos_para_grama(result) << " kg" << endl;
    }

    return 0;
}