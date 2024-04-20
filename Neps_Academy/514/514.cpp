#include <bits/stdc++.h>

using namespace std;

int main() {
    int Cv, Ce, Cs, Fv, Fe, Fs, pntsC = 0, pntsF = 0;
    string result;

    cin >> Cv >> Ce >> Cs >> Fv >> Fe >> Fs;

    pntsC = (Cv * 3) + (Ce * 1);
    pntsF = (Fv * 3) + (Fe * 1);

    if (pntsC == pntsF) {
        if(Cs == Fs) result = "=";
        else if(Cs > Fs) result = "C";
        else result = "F";
    } else if (pntsC > pntsF) result = "C";
    else result = "F";

    cout << result;

    return 0;
}