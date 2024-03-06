#include <bits/stdc++.h>

using namespace std;

int main() {
    float a, b, c, menor1, menor2, maior, result;

    cin >> a >> b >> c;

    if (a <= b && a <= c) menor1 = a;
    else if (b <= a && b <= c) menor1 = b;
    else menor1 = c;

    if(a <= b && a >= c) menor2 = a;
    else if(a >= b && a <= c) menor2 = a;
    else if(b >= a && b <= c) menor2 = b;
    else if(b <= a && b >= c) menor2 = b;
    else menor2 = c;

    if(a >= b && a >= c) maior = a;
    else if(b >= a && b >= c) maior = b;
    else maior = c;

    if((menor1 + menor2) > maior) {
        //perimetro do triangulo
        result = a + b + c;
        cout << fixed << setprecision(1) << "Perimetro = " << result << endl;
    } else {
        //area do trapezio
        result = ((a + b) * c) / 2;
        cout << fixed << setprecision(1) << "Area = " << result << endl;
    }

    return 0;
}