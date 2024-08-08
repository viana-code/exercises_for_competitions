#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll A, B, C, D, D1 = 0, D2 = 0, D3 = 0;
    list<ll> L;
    vector<ll> E;

    for(int i = 0; i < 4; i++) {
        int x;
        cin >> x;
        E.push_back(x);
    }

    sort(E.begin(), E.end());

    A = E[0];
    B = E[1];
    C = E[2];
    D = E[3];

    D1 = abs((A + B) - (C + D));
    D2 = abs((A + C) - (B + D));
    D3 = abs((B + C) - (A + D));

    L.push_back(D1);
    L.push_back(D2);
    L.push_back(D3);

    int diffMin = *min_element(L.begin(), L.end());

    cout << diffMin << endl;

    return 0;
}