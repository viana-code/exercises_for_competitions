#include <bits/stdc++.h>

using namespace std;

int main() {
    double raio, n = 3.14159, area = 0;

    cin >> raio;

    area = n * raio * raio;

    cout << "A=" << fixed << setprecision(4) << area << endl;

    return 0;
}