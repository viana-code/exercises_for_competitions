#include <bits/stdc++.h>

using namespace std;

int main() {
    int X;

    cin >> X;

    for(int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", X, i, (X * i));
    }

}