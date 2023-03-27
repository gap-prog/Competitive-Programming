// HackerEarth Problem Link: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/is-zoo-f6f309e7/

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int x = 0, y = 0;
	for (int i = 0; i < s.length(); ++i) {
		if (s[i] == 'z') x++;
		else y++;
	}
	cout << ((2 * x == y) ? "Yes" : "No") << endl;
	return 0;
}
