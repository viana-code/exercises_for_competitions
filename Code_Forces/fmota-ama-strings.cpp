#include <bits/stdc++.h>

using namespace std;

typedef long long int ll; // Opcional

// indice da letra no alfabeto
int indiceAlfabeto(char c) {
    return tolower(c) - 'a' + 1;
}

// calcula o valor da string
int valorString(string s, const vector <int> &v) {
    int valor = 0;
    
    for(int i = 0; i < s.length(); i++) {
        valor += (i + 1) * v.at(indiceAlfabeto(s[i]) - 1);
    }

    return valor;
}

// calcula o valor das k letras adicionadas
int valorKLetras(int sizeStringEntrada, int k, int maiorValor) {
    int valor = 0;
    
    for(int i = sizeStringEntrada + 1; i <= sizeStringEntrada + k; i++) {
        valor += (i * maiorValor);
    }

    return valor;
}

int main() {
    ios::sync_with_stdio(0); // Opcional
    cin.tie(0); // Opcional

    string s;
    int k, x, maiorValor;
    vector <int> w;

    cin >> s >> k;

    for(int i = 0; i < 26; i++) {
        cin >> x;
        w.push_back(x);
    }

    maiorValor = *max_element(w.begin(), w.end());

    cout << (valorString(s, w) + valorKLetras(s.length(), k, maiorValor)) << endl;
    
    return 0;
}