#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y, z, soma = 0;

    cin >> x >> y >> z;

    if(x % 2 == 0 || (x % 5 == 0 && x % 10 != 0)) {
        soma++;
    }

    if(y % 2 == 0 || (y % 5 == 0 && y % 10 != 0)) {
        soma++;
    }

    if(z % 2 == 0 || (z % 5 == 0 && z % 10 != 0)) {
        soma++;
    }

    cout << soma << endl;

    return 0;

}