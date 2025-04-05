#include <bits/stdc++.h>

using namespace std;

int main() {
    int c, m100, m50, m25, m10, m5, m1, soma = 0;
    
    cin >> c;
    
    m100 = c / 100;
    c %= 100;
    
    m50 = c / 50;
    c %= 50;
    
    m25 = c / 25;
    c %= 25;
    
    m10 = c / 10;
    c %= 10;
    
    m5 = c / 5;
    c %= 5;
    
    m1 = c / 1;
    c %= 1;

    soma = m100 + m50 + m25 + m10 + m5 + m1;
    
    cout << soma << '\n' << m100 << '\n' << m50 << '\n' << m25 << '\n' << m10 << '\n' << m5 << '\n' << m1 << endl;
    
    return 0;
}