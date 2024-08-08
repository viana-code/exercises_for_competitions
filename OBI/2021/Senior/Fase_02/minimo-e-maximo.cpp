#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll S, A, B, soma = 0;
    list <ll> L;

    cin >> S >> A >> B;

    if(A > B) swap(A,B);

    for(ll i = A; i <= B; i++) {
        ll val = i;
        soma = 0;

        while(val > 0) {
            soma += val % 10;
            val /= 10;
        }

        if(soma == S) L.push_back(i);
    }

    L.sort();

    auto minNum = *L.begin();
    auto maxNum = --L.end();

    //for(auto it = L.begin(); it != L.end(); ++it) cout << *it << " " << endl;

    cout << minNum << "\n" << *maxNum << endl;

    
    return 0;
}