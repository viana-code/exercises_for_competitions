// Estrutura para iniciantes
#include <iostream>

using namespace std;

int main() {
    double A, B, C, aux;

    cin >> A >> B >> C;

    if(A < B) {
        aux = B;
        B = A;
        A = aux;
    }
    if(A < C) {
        aux = C;
        C = A;
        A = aux;
    }
    if(B < C) {
        aux = C;
        C = B;
        B = aux;
    }

    if(A >= (B + C)) cout << "NAO FORMA TRIANGULO" << endl;
    else {
        if((A * A) == ((B * B) + (C * C))) cout <<  "TRIANGULO RETANGULO" << endl;
        else if((A * A) > ((B * B) + (C * C))) cout << "TRIANGULO OBTUSANGULO" << endl;
        else cout << "TRIANGULO ACUTANGULO" << endl;
        
        if((A == B) && (B == C) && (A == C)) cout << "TRIANGULO EQUILATERO" << endl;
        else if((A == B) || (B == C) || (A == C)) cout << "TRIANGULO ISOSCELES" << endl;
    }

    return 0;
}