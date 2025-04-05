#include <bits/stdc++.h>

using namespace std;

int to_minutes(int H, int M) {
    return (H * 60) + M;
}

int main() {
    int H, M;

    cin >> H >> M;

    cout << to_minutes(H, M) << endl;

    return 0;
}