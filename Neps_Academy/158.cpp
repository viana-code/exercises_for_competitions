#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int fatorial(int n) {
    if(n == 0 || n == 1) return 1;
    else return n * fatorial(n - 1);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, p = 0;

    cin >> n;

    p = fatorial(n);

    cout << p;
    
    return 0;
}