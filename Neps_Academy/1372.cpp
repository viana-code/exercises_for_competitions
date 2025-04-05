// *Couting Sort

#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, valorIndice;
    vector<int>vetor;

    cin >> x;

    // Preenhcer o vetor
    for(int i = 0; i < x; i++) {
        int n;
        cin >> n;
        vetor.push_back(n);
    }

    int maiorVal = *max_element(vetor.begin(), vetor.end());

    // Inicializa vetor de contagens
    vector<int>cont(x, 0);


    for(int i = 0; i < x; i++) {
        int posicao = i;

        for(int j = 0; j <= maiorVal; j++) {
            if(vetor[i] == j){
                posicao = j;
                break;
            }
        }

        cont[posicao]++;
    }
    

    for(int i = 0; i < x; i++) cout << cont[i] << " ";
    

    return 0;
}