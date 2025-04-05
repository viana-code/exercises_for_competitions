#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, A, B, C, aux;

    cin >> a >> b >> c;

    A = a;
    B = b;
    C = c;

    if(a > b) {
        aux = b;
        b = a;
        a = aux;
    }
    if(b > c){
        aux = c;
        c = b;
        b = aux;
    }
    if(a > b) {
        aux = b;
        b = a;
        a = aux;
    }
    
    cout << a << "\n" << b << "\n" << c << endl;
    cout << "\n" << A << "\n" << B << "\n" << C << endl;

    return 0;
}