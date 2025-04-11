#include <bits/stdc++.h>
using namespace std;

int main() {
    float n, soma = 0, media = 0;
    int den = 0;

    while(cin >> n) {
        if(n < 0) break;
        else {
            soma += n;
            den++;
        }
    }

    media = soma / den;

    cout << fixed << setprecision(2) << media << endl;

}