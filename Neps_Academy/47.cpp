#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, soma = 0;
    string seq, newSeq;

    cin >> n;
    cin.ignore();
    getline(cin,seq);

    for(char c : seq) {
        if(c != ' ') newSeq += c;
    }

    for(int i = 0; i < (n - 2); i++) {
        if(newSeq[i] == '1' && newSeq[i + 1] == '0' && newSeq[i + 2] == '0') soma++;
    }

    //for(int i = 0; i < n; i++) cout << seq[i];
    cout << soma << endl;
    return 0;
}