#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, soma = 0, e;

    cin >> N;
    
    for(int i = 0; i < N; i++) {
        cin >> e;
        soma += e;
    }

    cout << soma << endl;
}