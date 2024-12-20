#include <bits/stdc++.h>

using namespace std;

int main() {
    int C, P, F;

    cin >> C >> P >> F;

    printf("%c\n", ((C * F) <= P) ? 'S' : 'N');

    return 0;
}