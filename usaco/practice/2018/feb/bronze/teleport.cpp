#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("teleport.in", "r", stdin);
	freopen("teleport.out", "w", stdout);
	int a, b, x, y;
	cin >> a >> b >> x >> y;
	int l = abs(a - b);
	int p1 = abs(a - x) + abs(b - y);
	int p2 = abs(a - y) + abs(b - x);
	if (p1 < l){
		l = p1;
	}
	if (p2 < l) {
		l = p2;
	}
	cout << l << endl;
}

