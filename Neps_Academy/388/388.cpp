#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {
    ll espacos = 0, palavras = 0;
    double div = 0;
    string s;
    char c;
    set<char>Set;

    cin >> c;
    getchar();
    getline(cin, s);

    for(int i = 0; i < s.size(); i++) {

        if(s[i] != ' ') {
            Set.insert(s[i]);

            if(i == s.size() - 1) {
                if(Set.count(c) > 0) palavras++;
            } else continue;
        }
        else {
            espacos++;
            if(Set.count(c) > 0) palavras++;
        }

        Set.clear();
    }
    double palavrasD = static_cast<double>(palavras);
    double espacosD = static_cast<double>(espacos);
    div = palavrasD/ (espacosD + 1);
    cout << fixed << setprecision(1) << div * 100 << endl;

    return 0;
}