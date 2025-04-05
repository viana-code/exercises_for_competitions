#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
#define faster ios::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int32_t main() { faster
    ll n, m, t, a, b;

    cin >> n >> m;
    vector<unordered_set<unsigned ll>> g(n+1);

    for(ll i = 0; i < m; i++) {
        cin >> t >> a >> b;
        
        if(t == 0) {
            cout << (g[a].count(b)) << endl;
        } else {
            g[a].insert(b);
            g[b].insert(a);
        }
    }
    
    return 0;
}