#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;

    float v[n];

    for(int i = 0; i < n; i++) cin >> v[i];

    for(int i = 0; i < n; i++) cout << fixed << setprecision(4) << sqrt(v[i]) << endl;

    return 0;
}