#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, G, M, totalPizzas = 0;
    float div = 0;

    cin >> N >> G >> M;
    
    totalPizzas = (G * 8) + (M * 6);
    div = totalPizzas / N;

    if(div <= 0) cout << 0 << endl;
    else cout << abs(N - totalPizzas) << endl;

    return 0;
}