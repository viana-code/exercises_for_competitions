#include <bits/stdc++.h>

using namespace std;


int main(){ 
	string s, risada, inverseRisada;

    cin >> s;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            risada.push_back(s[i]);
        }
    }

    inverseRisada.resize(risada.length());
    reverse_copy(risada.begin(), risada.end(), inverseRisada.begin());

    // if(risada == inverseRisada) cout << 'S' << endl;
    // else cout << 'N' << endl;

    printf("%c\n", (risada == inverseRisada) ? 'S' : 'N');

    return 0;
}
