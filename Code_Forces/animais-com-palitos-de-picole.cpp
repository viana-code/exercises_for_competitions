#include <bits/stdc++.h>

using namespace std;

// incompleto

typedef long long int ll; // Opcional

int main() {
    ios::sync_with_stdio(0); // Opcional
    cin.tie(0); // Opcional

    multiset <int> palitos;
    map <int, int> m;

    int x;
    
    for(int i = 0; i < 6; i++) {
        cin >> x;
        palitos.insert(x);
        
        if(m.find(x) == m.end()) {
            m[x] = 1;
        } else {
            m[x]++;
        }
    }

    // for(const auto &i : m) {
    //     printf("m[%d] = %d\n", i.first, i.second);
    // }
    
    return 0;
}