#include <bits/stdc++.h>

// NAO RESOLVIDO

using namespace std;

int main() {
    long int N, M, count = 0;
    char L;
    multiset <int> E, D;

    cin >> N;

    for(long int i = 0; i < N; i++) {
        cin >> M >> L;

        if(L == 'D') D.insert(M);
        else E.insert(M);
    }

    for(auto i : D) {
        auto it = E.find(i);
        if(it != E.end()) {
            count++;
            E.erase(i);
        }
        
    }

    cout << count << endl;
}