// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=735

#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("lostcow.in", "r", stdin);
	freopen("lostcow.out", "w", stdout);
	int x, y;
	cin >> x >> y;
	if (x == y) {
		cout << 0 << endl;
	} else {
		int dir = 1, dist = 1, tdist = 0;
		while (true) {
			if ((dir == 1 && x <= y && x + dist >= y) || (dir == -1 && x >= y && x - dist <= y)) {
				cout << (tdist + abs(y - x)) << endl;
				break;
			}
			dist *= 2;
			tdist += dist;
			dir *= -1;
		}
	}
}
