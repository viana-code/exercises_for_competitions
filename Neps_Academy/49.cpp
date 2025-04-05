#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, soma = 0;

    cin >> n;

    vector<string> seq(n);
    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> seq[i];

    for(int i = 0; i < n; i++) {
        soma = 0;
        for(int j = i; seq[j] == seq[i]; j++) {
            soma++;
        }
        v[i] = soma;
    }

    for(int  i = 0; i < n; i++) cout << v[i];

    return 0;
}

//-1 0 -1 -1 -1 -1 -1 -1 -1 -1 0 -1 -1