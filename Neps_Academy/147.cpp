#include <bits/stdc++.h>

using namespace std;

int main() {
    float n1, n2, media = 0;

    cin >> n1 >> n2;

    media = ((n1 * 2) + (n2 * 3)) / (2 + 3);

    if(media >= 7) cout << "Aprovado" << endl;
    else if(media < 3) cout << "Reprovado" << endl;
    else cout << "Final" << endl;
    
    return 0;
}