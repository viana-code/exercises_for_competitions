#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, x, sereja = 0, dima = 0, id = 0;
    vector<ll> v;

    cin >> n;

    for(ll i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }
    
    ll size = n;
    int ehPar = 0;

    while(id < size) {
        if(id%2==0) {
            if(v.at(id) > v.back()) {
                sereja += v.at(id);
            } else {
                sereja += v.back();
                size--;
            }
        } else {
            if(v.at(id) > v.back()) {
                dima += v.at(id);
            } else {
                dima += v.back();
                size--;
            }
        }
        
        id++;
    }

    cout << sereja << " " << dima << "\n";
    
    return 0;
}