// CodeChef Problem Link: https://www.codechef.com/problems/WEEDING

#include <iostream>
using namespace std;

void solve() {
  int n, m, k; cin >> n >> m >> k;
  for (int i = 1; i <= n; ++i) {
    int a; cin >> a;
    if (i == n) {
      if (a + k - 1 <= m) {
        cout << "YES" << '\n';
        return;
      }
    }
  }
  cout << "NO" << '\n';
}

int main() {
	int t; cin >> t;
	while (t--) solve();
	return 0;
}

