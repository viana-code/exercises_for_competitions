#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, sub = 0, soma = 10, atual, ant;

    cin >> n;

    for(ll i = 0; i < n; i++) {
        cin >> atual;
        if(i > 0) {
            sub = abs(ant - atual);
            if(sub < 10) {
                soma += sub;
            } else {
                soma += 10;
            }
        }
        ant = atual;
    }

    cout << soma << endl;
    
    return 0;
}