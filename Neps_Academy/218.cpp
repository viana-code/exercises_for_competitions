#include <bits/stdc++.h>

using namespace std;

int main() {
    char C;
    double A, B;

    cin >> C >> A >> B;

    printf("%.2f\n", (C == 'D' ? A / B : A * B));
}