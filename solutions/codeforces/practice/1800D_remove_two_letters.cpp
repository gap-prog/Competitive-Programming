#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		string s;
		cin >> n >> s;
		int ans = n - 1;
		for (int i = 1; i + 1 < n; ++i) {
			if (s[i - 1] == s[i + 1]) {
				ans--;
			}
		}
		cout << ans << endl;
	}
	return 0;
}

