#include <bits/stdc++.h>

using namespace std;

int main() {
    int T1, T2, T3, T4, qntdTomadas;

    cin >> T1 >> T2 >> T3 >> T4;

    qntdTomadas = ((((((T1 + T2) - 1) + T3) - 1) + T4) - 1);

    cout << qntdTomadas << endl;

    return 0;
}