// USACO Problem Link: http://usaco.org/index.php?page=viewproblem2&cpid=1252

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		string s;
		cin >> n >> k >> s;
		vector<char> v(n);
		for (char &i: v) {
			i = '.';
		}
		int lg = -1 * k - 1;
		int lh = -1 * k - 1;
		int pc = 0;
		int r = n - 1;
		for (int i = 0; i < n; ++i) {
			if (s[i] == 'G' && abs(i - lg) > k) {
				if (i + k < r) {
					v[i + k] = 'G';
					lg = i + k;
					pc++;
				} else {
					v[r] = 'G';
					lg = r;
					pc++;
					r--;
				}
			} else if (s[i] == 'H' && abs(i - lh) > k) {
				if (i + k < r) {
					v[i + k] = 'H';
					lh = i + k;
					pc++;
				} else {
					v[r] = 'H';
					lh = r;
					pc++;
					r--;
				}
			}
		}
		cout << pc << endl;
		for (char &i: v) {
			cout << i;
		}
		cout << endl;
	}
	return 0;
}
