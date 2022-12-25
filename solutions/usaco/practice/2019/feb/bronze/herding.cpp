// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=915

#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("herding.in", "r", stdin);
	freopen("herding.out", "w", stdout);
	vector<int> v(3);
	for (int i = 0; i < 3; ++i) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	if (v[0] == v[2] - 2) {
		cout << 0 << endl;
	} else if ((v[1] == v[2] - 2) || (v[0] == v[1] - 2)) {
		cout << 1 << endl;
	} else {
		cout << 2 << endl;
	}
	cout << (max(v[2] - v[1], v[1] - v[0]) - 1) << endl;
	return 0;
}
