#include <bits/stdc++.h>

using namespace std;

int main() {
    long int N, P, Q, result;
    char C;

    cin >> N >> P >> C >> Q;

    if(C == '+') result = P + Q;
    else result = P * Q;

    printf("%s\n", (result > N) ? "OVERFLOW" : "OK");
}