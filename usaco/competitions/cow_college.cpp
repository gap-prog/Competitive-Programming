// USACO Problem Link: http://usaco.org/index.php?page=viewproblem2&cpid=1251

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	sort(v.rbegin(), v.rend());
	long long int ot = v[0], mt = v[0];
	for (int i = 0; i < n; ++i) {
		long long int tr = v[i];
		while (i + 1 < n && tr <= v[i + 1]) {
			++i;
		}
		long long int t = (i + 1) * tr;
		if (t > mt) {
			ot = tr;
			mt = t;
		} else if (t == mt) {
			ot = min(tr, ot);
		}
	}
	cout << mt << " " << ot << endl;
	return 0;
}
