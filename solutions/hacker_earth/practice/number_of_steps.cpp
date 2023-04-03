// HackerEarth Problem Link: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/make-all-equal-90a21ab2/

#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for (auto &i: a) cin >> i;
	for (auto &i: b) cin >> i;
	int ans = 0, i = 0, mn = *min_element(a.begin(), a.end());
	while (i < n) {
		if (a[i] >= b[i]) {
			while (a[i] > mn) {
				a[i] -= b[i];
				ans++;
			}
		}
		if (a[i] < mn) {
			mn = a[i];
			i = 0;
		}
		if (a[i] != mn) {
			ans = -1;
			break;
		}
		i++;
	}
	cout << ans << endl;
	return 0;
}
