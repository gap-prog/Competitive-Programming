// CodeForces Problem Link: https://codeforces.com/contest/479/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int ans = a + b + c;
	ans = max({ans, (a + b) * c, a * (b + c), a * b * c});
	cout << ans << endl;
	return 0;
}
