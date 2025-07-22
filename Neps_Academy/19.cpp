#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    ll N, M;
    vector <int> D(61, 0), E(61,0);
    char L;

    cin >> N;
    

    for(int i = 0; i < N; i++) {
        cin >> M >> L;   
        if(L == 'E') E[M]++;
        else D[M]++;
    }

    int total = 0;

    for(int i = 30; i <= 60; i++) {
        total += min(E[i], D[i]);
    }

    cout << total << endl;
}