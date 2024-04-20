#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int>v;

    for(int i = 0; i < 10; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    for(auto i : v) cout << i << " ";
    cout << endl;

    reverse(v.begin(), v.end());

    for(auto i : v) cout << i <<  " ";

    
    return 0;
}