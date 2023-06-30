// CodeChef Problem Link: https://www.codechef.com/problems/PILBELLS

#include <iostream>
using namespace std;

void solve() {
  int n, x, k, p; cin >> n >> x >> k >> p;
  for (int i = 1; i <= k; ++i) {
    if (i <= x) p += 10;
    else if (i == n) p += 25;
    else p += 5;
  }
  cout << p << '\n';
}

int main() {
	int t; cin >> t;
	while (t--) solve();
	return 0;
}

