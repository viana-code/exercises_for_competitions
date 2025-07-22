#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main() {
    int N;
    string A, B;

    cin >> N;
    cin.ignore(); // limpa o buffer
    getline(cin, A);
    getline(cin, B);

    string fraseA, fraseB;

    for(int i = 0; i < N; i++) {
        if(A[i] != ' ' && A[i] != '.' && A[i] != ','){
            fraseA += A[i];
        }
        
        if(B[i] != ' ' && B[i] != '.' && B[i] != ','){
            fraseB += B[i];
        }
    }

    sort(fraseA.begin(), fraseA.end());
    sort(fraseB.begin(), fraseB.end());

    if(fraseA == fraseB) cout << "S" << endl;
    else cout << "N" << endl;
}