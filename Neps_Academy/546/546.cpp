#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, k;
    vector<string> v;

    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        string x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    cout << v.at(k - 1) << endl;

    
    return 0;
}