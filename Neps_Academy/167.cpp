#include <bits/stdc++.h>

using namespace std;

int main() {
    int L, C, t1 = 0, t2 = 0;

    cin >> L >> C;

    t1 = (L * C) + ((L - 1) * (C - 1));
    t2 = (2 * (L -1)) + (2 * (C - 1));

    cout << t1 << "\n" << t2 << endl;
}