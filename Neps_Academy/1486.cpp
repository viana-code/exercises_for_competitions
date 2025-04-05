#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, x, soma = 0, last;
    stack<ll> s;
    
    cin >> n;

    for(ll i = 0; i < n; i++) {
        cin >> x;
        if(x == 0) {
            last = s.top();
            soma -= last;
            s.pop();
        } else {
            s.push(x);
            soma += x;
        }
    }

    cout << soma << endl;
    
    return 0;
}