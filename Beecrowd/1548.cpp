#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, m, cont = 0;
    vector<int> v;
    vector<int> o;

    cin >> n;
    cin.ignore();

    for(ll i = 0; i < n; i++) {    
        cin >> m;

        for(ll j = 0; j < m; j++) {
            int x;
            cin >> x;

            v.push_back(x);
        }

        o = v;

        sort(o.begin(), o.end());
        reverse(o.begin(), o.end());

        
        for(ll j = 0; j < v.size(); j++) {
            if(v[j] == o[j]) cont++;
        }

        cout << cont << endl;
        cont = 0;
        o.clear();
        v.clear();
    }

    
    return 0;
}