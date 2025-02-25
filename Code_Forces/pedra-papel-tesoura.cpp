#include <bits/stdc++.h>

using namespace std;

typedef long long int ll; // Opcional

int main() {
    ios::sync_with_stdio(0); // Opcional
    cin.tie(0); // Opcional

    string bruno, felipe, rafael;

    cin >> bruno >> felipe >> rafael;

    // impate
    if(bruno == felipe && felipe == rafael && bruno == rafael) cout << "?" << endl;
    // caso em que o bruno vence
    else if(
        (bruno == "rock" && felipe == "scissors" && rafael == "scissors") ||
        (bruno == "paper" && felipe == "rock" && rafael == "rock") ||
        (bruno == "scissors" && felipe == "paper" && rafael == "paper")
    ) {
        cout << "F" << endl;
    }
    // caso em que o felipe
    else if(
        (felipe == "rock" && bruno == "scissors" && rafael == "scissors") ||
        (felipe == "paper" && bruno == "rock" && rafael == "rock") ||
        (felipe == "scissors" && bruno == "paper" && rafael == "paper")
    ) {
        cout << "M" << endl;
    }
    // caso em que o rafael vence jogando pedra
    else if(
        (rafael == "rock" && bruno == "scissors" && felipe == "scissors") ||
        (rafael == "paper" && bruno == "rock" && felipe == "rock") ||
        (rafael == "scissors" && bruno == "paper" && felipe == "paper")
    ) {
        cout << "S" << endl; 
    }
    // caso contrario
    else cout << "?" << endl;
    
    return 0;
}