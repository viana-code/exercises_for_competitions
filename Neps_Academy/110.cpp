#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, soma = 0, maiorVal = 0;
    string seq;

    cin >> n;
    cin.ignore();
    getline(cin,seq);

    vector<string> newSeq(n);

    istringstream stream(seq);

    for(int i = 0; i < n; i++) {
        stream >> newSeq[i];
    }

    for(int i = 0; i < n; i++) {
        soma = 0;
        for(int j = i; newSeq[j] == newSeq[i]; j++) {
            soma++;
            if(soma > maiorVal) maiorVal = soma;
        }
    }

    cout << maiorVal << endl;

    return 0;
}


//30 30 30 40 40 40 40 40 30 30 30