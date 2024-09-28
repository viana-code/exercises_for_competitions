#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned long long int n, m, fib[61];
    
    cin >> n;

    fib[0] = 0;
    fib[1] = 1;

   for(int i = 2; i < 61; i++) {
    fib[i] = fib[i-1] + fib[i-2];
    //cout << fib[i] << endl;
   }

   for(int i = 0; i < n; i++) {
    cin >> m;
    cout << "Fib(" << m << ") = " << fib[m] << endl;
   }

    return 0;
}