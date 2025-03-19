#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll m, n, x;
    vector<int> v;

    cin >> n;
    v.reserve(n);

    for(ll i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    cin >> m;

    unordered_set<int> remover;

    for(ll i = 0; i < m; i++) {
        cin >> x;
        remover.insert(x);
    }

    v.erase(remove_if(v.begin(), v.end(), [&](int num) {
        return remover.count(num);
    }), v.end());

    for(const auto i : v) {
        cout << i << " ";
    }
    
    cout << endl;
    
    return 0;
}