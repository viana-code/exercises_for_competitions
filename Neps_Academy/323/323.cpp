#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

vector<int> split(const string &inputString) {
    vector<int> numeros;
    stringstream ss(inputString);
    string palavra;

    while(ss >> palavra) numeros.push_back(stoi(palavra));

    return numeros;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;

    getline(cin, s);

    vector<int> palavras = split(s);
    auto maior = *max_element(palavras.begin(), palavras.end());

    cout << maior << endl;

    
    return 0;
}