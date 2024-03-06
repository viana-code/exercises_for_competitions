#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;
    float qntd, var, total; 

    cin >> x >> qntd;

    switch(x) {
        case 1:
        var = 4.00;
        break;

        case 2:
        var = 4.50;
        break;

        case 3:
        var = 5.00;
        break;

        case 4:
        var = 2.00;
        break;

        case 5:
        var = 1.50;
        break;
    }

    total = var * qntd;

    cout << fixed << setprecision(2) << "Total: R$ " << total << endl;

    return 0;
}