#include <bits/stdc++.h>

using namespace std;

int main() {
    int V[10], X;
    bool finded = false;

    for(int i = 0; i < 10; i++) {
        cin >> V[i];
    }

    cin >> X;

    for(int i = 0; i < 10; i++) {
        if(V[i] == X) {
            finded = true;
            break;
        }
    }

    printf("%s\n", finded ? "SIM" : "NAO");

}