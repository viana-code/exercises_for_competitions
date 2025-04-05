#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, menor, aux;

    cin >> n;

    int v[n];

    for(int i = 0; i < n; i++) cin >> v[i];

    for(int i = 0; i < n; i++) {
        menor = i;
        for(int j = i + 1; j < n; j++) {
            if(v[menor] > v[j]) menor = j;
        }

        if(i != menor) {
            aux = v[i];
            v[i] = v[menor];
            v[menor] = aux;
        }
    }

    for(int i = 0; i < n; i++) cout << v[i] << " ";
}