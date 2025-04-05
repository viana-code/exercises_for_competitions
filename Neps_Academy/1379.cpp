#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, menor, aux;
    vector<int>vetorImpar;
    vector<int>vetorPar;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 2 == 0) vetorPar.push_back(x);
        else vetorImpar.push_back(x);
    }

    // Ordenar estes vetores
    for(int i = 0; i < vetorImpar.size(); i++) {
        menor = i;
        for(int j = i + 1; j < vetorImpar.size(); j++) {
            if(vetorImpar[j] < vetorImpar[menor]) menor = j;
        }

        aux = vetorImpar[i];
        vetorImpar[i] = vetorImpar[menor];
        vetorImpar[menor] = aux;

    }

    vetorImpar.insert(vetorImpar.end(), vetorPar.begin(), vetorPar.end());

    for(int i : vetorImpar) cout << i << " ";


    return 0;
}