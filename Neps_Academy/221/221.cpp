#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, pontos, cont = 0, p1, p2;

    cin >> n >> pontos;

    for(int i = 0; i < n; i++) {
        cin >> p1 >> p2;

        if((p1 + p2) >= pontos) cont++;
    }

    cout << cont;


    return 0;
}