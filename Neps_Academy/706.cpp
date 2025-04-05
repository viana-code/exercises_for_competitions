#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, diff = 0, hora = 0;
    cin >> n;

    diff = (n - 8) - 1;

    if(diff >= 0) hora = diff;
    else hora = 24 + diff;

    cout << hora << endl;
    
    return 0;
}