#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, soma = 0;
    string GAB, POS;

    cin >> N >> GAB >> POS;

    for(int i = 0; i < N; i++) {
        if(toupper(GAB[i]) == toupper(POS[i])) soma++;
    }


    cout << soma << endl;
    
    return 0;
}