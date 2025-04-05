#include <bits/stdc++.h>

using namespace std;

int main() {
    int vInicial[10], X, contador = 0;
    list <int> indices;

    for(int i = 0; i < 10; i++) {
        cin >> vInicial[i];
    }

    cin >> X;
    
    for(int i = 0; i < 10; i++) {
        if(vInicial[i] == X) {
            contador++;
            indices.push_back(i);
        }
    }

    if(contador != 0) {
        cout << contador << endl;

        for(auto i : indices) {
            cout << i << " ";
        }
    } else {
        cout << "Mia x" << endl;
    }
}
