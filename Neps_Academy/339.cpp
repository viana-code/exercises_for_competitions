#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    vector <char> v, c;

    cin >> s;

    for(unsigned int i = 0; i < s.size(); i++) {
        if(s[i] == 'a' ||s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            v.push_back(s[i]);
        } else {
            c.push_back(s[i]);
        }
    }

    
    cout << "Vogais: ";
    for(const auto i : v) {
        cout << i;
    }
    
    cout << endl;

    cout << "Consoantes: ";
    for(const auto i : c) {
        cout << i;
    }

    return 0;
}