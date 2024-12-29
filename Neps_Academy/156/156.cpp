#include <bits/stdc++.h>

using namespace std;

int main() {
    int A, B;

    cin >> A >> B;

    if(A > B) swap(A, B);

    for(int i = A; i <= B; i++) {
        cout << i << " ";
    }

}