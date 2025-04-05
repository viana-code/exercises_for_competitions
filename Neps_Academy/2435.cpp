#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, cont = 0;
    string C;
    vector<int> v;

    cin >> N >> C;

    for(int i = 0; i < N; i++) {
        for(int j = i; j < N; j++) {
            if(C[i] != C[j]) {
                cont = 0;
                break;
            }
            cont++;
        }
        v[i] = cont;
        v[i + 1] = C[i];
    }

    for(size_t i = 0; i < v.size(); i++) {
        cout << v[i];
    }

    return 0;
}