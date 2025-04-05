#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;

    cin >> N;

    vector <int> result(N, 0), entrada;

    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        entrada.push_back(x);
    }

    for(int i = 0; i < N; i++) {
        if(i != 0 && i != (N - 1)) {
            
            if(entrada[i] == 1) result[i]++;

            if(entrada[i-1] == 1) result[i]++;

            if(entrada[i+1] == 1) result[i]++;
            
        } else if(i == 0) {
            
            if(entrada[i] == 1) result[i]++;

            if(entrada[i+1] == 1) result[i]++;

        } else {
            if(entrada[i] == 1) result[i]++;

            if(entrada[i-1] == 1) result[i]++;
        }
    }

    for(auto i : result) cout << i << endl;

}