// AtCoder Problem Link: https://atcoder.jp/contests/abc296/tasks/abc296_a

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string s;
	cin >> n >> s;
	bool alternate = true;
	for (int i = 1; i < n; ++i) {
		if (s[i] == s[i - 1]) alternate = false;
	}
	cout << ((alternate) ? "Yes" : "No") << endl;
	return 0;
}
