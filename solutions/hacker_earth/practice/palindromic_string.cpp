// HackerEarth Problem Link: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int l = 0, r = s.length() - 1;
	bool palindrome = true;
	while (l < r) {
		if (s[l] != s[r]) {
			palindrome = false;
			break;
		}
		l++; r--;
	}
	cout << ((palindrome) ? "YES" : "NO") << endl;
	return 0;
}
