// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=856

#include <iostream>
#include <algorithm>
using namespace std;

int timeline[1001];

int main() {
	freopen("blist.in", "r", stdin);
	freopen("blist.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int start, end, amt;
		cin >> start >> end >> amt;
		timeline[start] += amt;
		timeline[end] -= amt;
	}
	int m = -1;
	int c = 0;
	for (int i = 0; i <= 1000; i++) {
		c += timeline[i];
		m = max(m, c);
	}
	cout << m << endl;
}
