#include <bits/stdc++.h>

using namespace std;

int main() {
    int D, pnts;

    cin >> D;

    if (D <= 800) pnts = 1;
    else if (D > 800 && D <= 1400) pnts = 2;
    else if (D > 1400 && D <= 2000) pnts = 3;

    cout << pnts << endl;

    return 0;
}