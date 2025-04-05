// Estrutura para iniciante
#include <iostream>

using namespace std;

int main() {
    int h1, h2, hora = 0, diffHora = 0;

    cin >> h1 >> h2;

    if(h1 == h2) hora = 24;
    else if(h1 > h2) hora = 24 - (h1 - h2);
    else hora = h2 - h1;

    cout << "O JOGO DUROU " << hora << " HORA(S)" << endl;

    return 0;
}