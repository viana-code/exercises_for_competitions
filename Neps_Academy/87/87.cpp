#include <iostream>

using namespace std;

int main(){
    // Lendo a entrada do exercício
    int P, R;
    cin >> P >> R;

    // Seu código vai aqui
	if((P == 0 && R == 0) || (P == 0 && R == 1)) {
		cout << "C" << endl;
	} else if((P == 1 && R == 0)) {
		cout << "B" << endl;
	} else {
		cout << "A" << endl;
	}

    return 0;
}
