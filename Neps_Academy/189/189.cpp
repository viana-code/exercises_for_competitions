#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int>v;

    int n, n0 = 0, n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0, n7 = 0, n8 = 0, n9 = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        string x;
        cin >> x;

        for(int j = 0; j < x.size(); j++) {
            switch(x[j]) {
                case '0':
                n0++;
                break;

                case '1':
                n1++;
                break;

                case '2':
                n2++;
                break;

                case '3':
                n3++;
                break;

                case '4':
                n4++;
                break;

                case '5':
                n5++;
                break;

                case '6':
                n6++;
                break;

                case '7':
                n7++;
                break;

                case '8':
                n8++;
                break;

                case '9':
                n9++;
                break;
            }
            
        }
    }

    printf("0 - %d\n1 - %d\n2 - %d\n3 - %d\n4 - %d\n5 - %d\n6 - %d\n7 - %d\n8 - %d\n9 - %d", n0, n1, n2, n3, n4, n5, n6, n7, n8, n9);

    return 0;
}