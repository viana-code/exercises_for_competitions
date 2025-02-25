#include <bits/stdc++.h>

// NAO FINALIZADO

using namespace std;


// busca uma substring na string
bool verificarSubstring(string s, string sub) {

    return s.find(sub) != string::npos;
}

int main() {
    ios::sync_with_stdio(0); // Opcional
    cin.tie(0); // Opcional

    string s, sub1, sub2;
    int q, posInicialSub1 = 0, posFinalSub2 = 0, sizeString = 0;
    vector <string> subs;

    cin >> s >> q;

    for(int i = 0; i < q; i++) {
        cin >> sub1 >> sub2;
        subs.push_back(sub1);
        subs.push_back(sub2);

        if(!verificarSubstring(s, subs.at(0)) || !verificarSubstring(s, subs.at(1))) {
            cout << -1 << endl;
        } else {
            posInicialSub1 = s.find(subs.at(0));
            posFinalSub2 = s.find(subs.at(1)) + (subs.at(1).length() - 1);
            sizeString = (posFinalSub2 - posInicialSub1) + 1;

            cout << sizeString << endl;
        }

        subs.clear();
    }
    
    return 0;
}