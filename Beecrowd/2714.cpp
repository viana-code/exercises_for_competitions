#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
#define faster ios::sync_with_stdio(0); cin.tie(0);
//#define endl '\n'

int32_t main() { faster
    ll n;
    string s;

    cin >> n;

    while(n--) {
        cin >> s;
        string senha_prov = "";
        bool isvalid = true;

        if(s[0] != 'R' || s[1] != 'A' || s.length() != 20) {
            cout << "INVALID DATA" << endl;
        } else {
            for(ll i = 2; i < s.length(); i++) {
                if(isdigit(s[i])) {
                    if(senha_prov.empty()) {
                        if(s[i]-'0' != 0) senha_prov += s[i];
                    } else {
                        senha_prov += s[i];
                    }
                } else {
                    isvalid = false;
                }
            }
            if(isvalid) cout << senha_prov << endl;
            else cout << "INVALID DATA" << endl;
        }
    }
    
    return 0;
}