// SPOJ Problem Link: https://www.spoj.com/problems/AE00/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, idx = 1, res = 0;
	cin >> n;
	while (true) {
		int mx = n / idx;
		if (idx > mx) break;
		res += (mx - idx + 1);
		idx++;
	}
	cout << res << '\n';
	return 0;
}
