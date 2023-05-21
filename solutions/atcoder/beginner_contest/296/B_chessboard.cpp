// AtCoder Problem Link: https://atcoder.jp/contests/abc296/tasks/abc296_b

#include <bits/stdc++.h>
using namespace std;

int main() {
	map<int, char> m {{1, 'a'},{2, 'b'}, {3, 'c'}, {4, 'd'}, {5, 'e'}, {6, 'f'}, {7, 'g'}, {8, 'h'}};
	for (int i = 0; i < 8; ++i) {
		string s;
		cin >> s;
		for (int j = 0; j < 8; ++j) {
			if (s[j] == '*') {
				cout << m[j + 1] << 8 - i << endl;
			}
		}
	}
	return 0;
}
