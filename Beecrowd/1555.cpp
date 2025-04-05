#include <bits/stdc++.h>

using namespace std;

// Rafael
int r(int x, int y) {
    return pow((3 * x), 2) + pow(y, 2); // Ou return ((3 * x) * (3 * x)) + (y * y)
}

// Beto
int b(int x, int y) {
    return (2 * pow(x, 2)) + pow((5 * y), 2); // Ou return (2 * (x * x)) + ((5 * y) * (5 * y))
}

// Carlos
int c(int x, int y) {
    return (-100 * x) + pow(y, 3); // Ou return (-100 * x) + (y * y * y)
}

// verifica que é o maior
void maior(int x, int y) {
    int rafael, carlos, beto;

    rafael = r(x, y);
    carlos = c(x, y);
    beto = b(x, y);

    if(rafael > carlos && rafael > beto) {
        cout << "Rafael ganhou" << endl;
    } else if(carlos > rafael && carlos > beto) {
        cout << "Carlos ganhou" << endl;
    } else {
        cout << "Beto ganhou" << endl;
    }
}

int main() {
    int n, x, y;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x >> y;

        maior(x, y);
    }

    return 0;
}