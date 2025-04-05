#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ll;
#define faster ios::sync_with_stdio(0); cin.tie(0);
//#define endl '\n'

int32_t main() { faster
    ll a, v, x, y, caso = 1;
    
    while(cin >> a >> v) {
        if(a == 0 && v == 0) break;
        vector<ll> g(a+1, 0);
        
        for(ll i = 1; i <= v; i++) {
            cin >> x >> y;
            g[x]++;
            g[y]++;
        }
        int maxg = *max_element(g.begin(), g.end());

        cout << "Teste " << caso++ << '\n';
        for (int i = 1; i <= a; i++) {
            if (g[i] == maxg) {
                cout << i << ' ';
            }
        }
        cout << "\n\n";
    }
    
    return 0;
}