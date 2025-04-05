#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
#define faster ios::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int32_t main() { faster
    string s, s2;

    cin >> s;
    s2 = s;
    reverse(s.begin(), s.end());

    if(s == s2) cout << "eh palindromo" << endl;
    else cout << "nao eh palindromo" << endl;
    
    return 0;
}