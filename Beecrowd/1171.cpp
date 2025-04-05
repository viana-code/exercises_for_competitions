#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
#define faster ios::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int32_t main() { faster
    vector<ll> v(2000, 0);
    set<ll> s;
    ll n, x;

    cin >> n;

    for(ll i = 0; i < n; i++) {
        cin >> x;
        v[x]++;
        s.insert(x);
    }

    for(auto i : s) {
        printf("%lld aparece %lld vez(es)\n", i, v[i]);
    }
    
    return 0;
}