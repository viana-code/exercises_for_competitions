#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    float p, result = 0, g;
    vector<float>v;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> p >> g;
        result = p * (1000 / g);
        v.push_back(result);
    }

    float menor = *min_element(v.begin(), v.end());

    cout << fixed << setprecision(2) << menor;

    return 0;
}