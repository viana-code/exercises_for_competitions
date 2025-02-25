#include <bits/stdc++.h>

using namespace std;

int indiceAlfabeto(char c) {
    return tolower(c) - 'a' + 1;
}

int main() {
    string s;

    cin >> s;

    // Retorna o indice/posicao da letra no alfabeto
    cout << indiceAlfabeto(s[0]);
    
    return 0;
}