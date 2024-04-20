#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {
    float l, lado;
    ll qntd = 1;

    cin >> l;

    for(int i = 0; l >= 2; i++) {
        qntd *= 4;
        l /= 2;
    }

    cout << qntd;

    return 0;
}