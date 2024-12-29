#include <bits/stdc++.h>

using namespace std;

int main() {
    vector <int> v;

    for(int i = 0; i < 10; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    reverse(v.begin(), v.end());

    for(auto i : v) cout << i << endl;
}