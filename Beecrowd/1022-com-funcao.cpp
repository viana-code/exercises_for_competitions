#include <bits/stdc++.h>

using namespace std;

double calculaArea(double raio) {
    double n = 3.14159;
    
    return n * raio * raio;
}

int main() {
    double raio;

    cin >> raio;

    cout << "A=" << fixed << setprecision(4) << calculaArea(raio) << endl;

    return 0;
}