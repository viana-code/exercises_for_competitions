#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, t, h;
    vector<pair<int, string>> alunos;
    vector<pair<string, int>> times;
    string nome;
    
    cin >> n >> t;

    alunos.reserve(n);
    times.reserve(n);

    for(ll i = 0; i < n; i++) {
        cin >> nome >> h;
        alunos.push_back({h, nome});
    }

    sort(alunos.begin(), alunos.end());
    reverse(alunos.begin(), alunos.end());

    ll cont = 1;

    for(const auto i : alunos) {
        times.push_back({i.second, cont});
        if(cont == t) cont = 1;
        else cont++;
    }

    sort(times.begin(), times.end());

    for(ll i = 0; i < t; i++) {
        cout << "Time " << (i+1) << "\n";
        
        for(const auto j : times) {
            if(i+1 == j.second) {
                cout << j.first << "\n";
            }
        }
        cout << "\n";
    }
    
    return 0;
}