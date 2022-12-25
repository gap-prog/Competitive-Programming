// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=891

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	freopen("shell.in", "r", stdin);
	freopen("shell.out", "w", stdout);
	vector <int> shells{0, 1, 2};
	vector <int> shellCount{0, 0, 0};
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b, g;
		cin >> a >> b >> g;
		a--;
		b--;
		g--;
		swap(shells[a], shells[b]);
		shellCount[shells[g]]++;
	}
	cout << max({shellCount[0], shellCount[1], shellCount[2]}) << endl;
}
