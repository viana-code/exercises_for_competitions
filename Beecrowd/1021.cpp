#include <bits/stdc++.h>
using namespace std;

int main() {
    double N;
    cin >> N;
    cout<<setprecision(0)<<fixed;
    cout << "NOTAS:" << endl;
    cout << floor(N / 100.0) << " nota(s) de R$ 100.00" << endl;
    N = fmod(N, 100.0);
    cout << floor(N / 50.0) << " nota(s) de R$ 50.00" << endl;
    N = fmod(N, 50.0);
    cout << floor(N / 20.0) << " nota(s) de R$ 20.00" << endl;
    N = fmod(N, 20.0);
    cout << floor(N / 10.0) << " nota(s) de R$ 10.00" << endl;
    N = fmod(N, 10.0);
    cout << floor(N / 5.0) << " nota(s) de R$ 5.00" << endl;
    N = fmod(N, 5.0);
    cout << floor(N / 2.0) << " nota(s) de R$ 2.00" << endl;
    N = fmod(N, 2.0);

    cout << "MOEDAS:" << endl;
    cout << floor(N / 1.0) << " moeda(s) de R$ 1.00" << endl;
    N = fmod(N, 1.0);
    cout << floor(N / 0.50) << " moeda(s) de R$ 0.50" << endl;
    N = fmod(N, 0.50);
    cout << floor(N / 0.25) << " moeda(s) de R$ 0.25" << endl;
    N = fmod(N, 0.25);
    cout << floor(N / 0.10) << " moeda(s) de R$ 0.10" << endl;
    N = fmod(N, 0.10);
    cout << floor(N / 0.05) << " moeda(s) de R$ 0.05" << endl;
    N = fmod(N, 0.05);
    cout << (N / 0.01) << " moeda(s) de R$ 0.01" << endl;

    return 0;
}