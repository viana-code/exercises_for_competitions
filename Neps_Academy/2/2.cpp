#include <bits/stdc++.h>

using namespace std;

int main(){
    int m[3], indexMin = 0, indexMed = 0, indexMax = 0;
    
    cin >> m[0] >> m[1] >> m[2];

    int min = m[0], max = m[0];

    for(int i = 0; i < 3; i++) {
        if(m[i] > max) {
            max = m[i];
            indexMax = i;
        }
        
        if(m[i] < min) {
            min = m[i];
            indexMin = i;
        }
    }

    indexMed = 3 - indexMin - indexMax;

    printf("%d\n%d\n%d\n", indexMin + 1, indexMed + 1, indexMax + 1);

    return 0;
}
