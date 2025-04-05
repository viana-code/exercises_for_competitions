#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
#define faster ios::sync_with_stdio(0); cin.tie(0);
//#define endl '\n'

int32_t main() { faster
    ll N;
    string s;

    cin >> N;

    for(ll i = 0; i < N; i++) {
        cin >> s;
        string nums = "";
        vector<ll> numeros;
        ll soma = 0;
        
        for(auto c : s) {
            if(isdigit(c)) {
                nums += c;
            } else if(!nums.empty()) {
                numeros.push_back(stoi(nums));
                nums = "";
            }
        }

        if(!nums.empty()) numeros.push_back(stoi(nums));

        for(auto i : numeros) soma += i;
        cout << soma << endl;
    }
    
    return 0;
}