#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
#define faster ios::sync_with_stdio(0); cin.tie(0);

int32_t main() { faster
    ll n;

    cin >> n;

    while(n--) {
        string s = "", s2 = "";
        cin >> s;

        for(char c : s) {
            if(c >= 'a' && c <= 'z') s2 += c;
        }
        reverse(s2.begin(), s2.end());
        cout << s2 << endl;
    }
    
    return 0;
}