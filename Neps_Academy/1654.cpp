#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main() {
    string frase;
    unordered_set<char> expressao;

    getline(cin, frase);
    
    for(const auto c : frase) {
        if(c != ' ' && c != ',' && c != ':' && c != 'k' && c != 'w' && c != 'y') {
            expressao.insert(c);
        }
    }

    if(expressao.size() == 23) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

}