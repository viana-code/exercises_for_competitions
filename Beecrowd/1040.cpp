

// Media 03

#include <iostream>

using namespace std;

int main() {
    float media = 0, N1, N2, N3, N4, NE;

    cin >> N1 >> N2 >> N3 >> N4;

    media = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)) / (2 + 3 + 4 + 1);

    cout << fixed;
    cout.precision(1);

    cout << "Media: " << media << endl;

    if(media >= 7) cout << "Aluno aprovado." << endl;
    else if(media < 5) cout << "Aluno reprovado." << endl;
    else {

        cout << "Aluno em exame." << endl;

        cin >> NE;

        cout << fixed;
        cout.precision(1);

        media += NE;
        //media = media + NE

        media /= 2;
        //media = media / 2

        if(media >= 5) cout << "Aluno aprovado." << endl;
        else cout <<  "Aluno reprovado." << endl;

        cout << fixed;
        cout.precision(1);

        cout << "Media final: " << media << endl;
    }


    return 0;
}