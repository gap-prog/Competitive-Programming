// CSES Problem Link: https://cses.fi/problemset/task/2165

#include <bits/stdc++.h>
using namespace std;

void solve(int n1, int n2, int n3, int n) {
	if (n == 0) return;
	solve(n1, n3, n2, n - 1);
	cout << n1 << ' ' << n3 << '\n';
	solve(n2, n1, n3, n - 1);
}

int main() {
	int n;
	cin >> n;
	cout << (1 << n) - 1 << '\n';
	solve(1, 2, 3, n);
	return 0;
}
