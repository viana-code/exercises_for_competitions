#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, linha = 0;
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> x;
            linha += x;
        }
        printf("Linha %d: %d\n", i, linha);
        linha = 0;
    }
}