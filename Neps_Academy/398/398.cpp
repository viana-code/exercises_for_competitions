#include <bits/stdc++.h>

using namespace std;

int main() {
	string S;
	char C;
	int count = 0;

	cin >> S >> C;

	for(int i = 0; i < S.length(); i++) {
		if(S[i] == C) count++;
	}

	cout << count << endl;
}
