#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main() {
    unsigned int N;
    vector<unsigned int> alunos;

    cin >> N;

    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        alunos.push_back(x);
    }

    int contador = 0, maiorValor = alunos.back(); // alunos[N-1]

    // Percorrer de trás pra frente
    for(int i = (N - 2); i >= 0; i--) {
        if(alunos[i] <= maiorValor) {
            contador++;
        } else {
            maiorValor = alunos[i];
        }
    }

    cout << contador << endl;

}