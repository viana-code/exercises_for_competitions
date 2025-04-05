#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int>vetorInicial;
    vector<int>vetorRemove;
    vector<int>indice;
    vector<int>vetorNew;

    int n, remove;

    cin >> n;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vetorInicial.push_back(x);
    }

    cin >> remove;

    for(int i = 0; i < remove; i++) {
        int x;
        cin >> x;
        vetorRemove.push_back(x);
    }

    int limite = vetorInicial.size();
    for(int i = 0; i < vetorRemove.size(); i++) {
        for(int j = 0; j < limite; j++) {
            if(vetorRemove[i] == vetorInicial[j]) {
                vetorInicial.erase(vetorInicial.begin() + j);
                limite--;
                break;
            }
        }
    }

    for(int i : vetorInicial) cout << i << " ";

    /*for(int i = 0; i < vetorInicial.size(); i++) {
        for(int j = 0; j < vetorRemove.size(); j++) {
            if(vetorInicial[i] == vetorRemove[j])
            indice.push_back(i);
        }
    }*/


    return 0;


}