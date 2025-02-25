#include <bits/stdc++.h>

using namespace std;

// busca uma substring na string
bool verificarSubstring(string s, string sub) {
    // retorna 1 (true) caso a substring esteja presente na string
    // caso contrario, retorna 0 (false)

    // o find retorna o indice da primeira letra da sub, se ela existir na string

    return s.find(sub) != string::npos;
}

int main() {

    // substring existe
    string s, substring;
    cin >> s >> substring;
    cout << verificarSubstring(s, substring);
    
    return 0;
}