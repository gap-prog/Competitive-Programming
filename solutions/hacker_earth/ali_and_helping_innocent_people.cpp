#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	if (s[2] == 'A' || s[2] == 'E' || s[2] == 'I' || s[2] == 'O' || s[2] == 'U' || s[2] == 'Y') {
		cout << "invalid" << endl;
	} else {
		int m1 = ((int) s[0] + (int) s[1]) % 2, m2 = ((int) s[3] + (int) s[4]) % 2, m3 = ((int) s[4] + (int) s[5]) % 2, m4 = ((int) s[7] + (int) s[8]) % 2;
		if (m1 != 0 || m2 != 0 || m3 != 0 || m4 != 0) {
			cout << "invalid" << endl;
		} else {
			cout << "valid" << endl;
		}
	}
	return 0;
}
