#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x;
    list<int> l;

    for(int i = 0; i < 3; i++) {
        cin >> x;
        l.push_back(x);
    }

    l.sort();

    list<int>::iterator it = l.begin();
    advance(it, 1);
    
    cout << *it;
    
    return 0;
}