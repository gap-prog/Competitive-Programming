#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int ans = 0;
		for (int i = 1; i <= n; ++i) {
			int p;
			cin >> p;
			ans = __gcd(ans, abs(p - i));
		}
		cout << ans << '\n';
	}
	return 0;
}
