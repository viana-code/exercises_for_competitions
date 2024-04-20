#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {
    ll n;
    int cont = 0;
    vector<string>v;

    while(cin >> n) {
        if(n == 0) break; 

        string s1, s2, ganhador;
        ll a, b;
        cin >> s1;
        cin >> s2;

        string teste = "Teste ";
        teste += to_string(cont + 1);
        v.push_back(teste);
        

        for(int i = 0; i < n; i++) {

            cin >> a >> b;

            if((a + b) % 2 == 0) ganhador = s1;
            else ganhador = s2;

            v.push_back(ganhador);
        }

        v.push_back("\n");
        cont ++;
    }

    for(auto i : v) cout << i << endl;
}