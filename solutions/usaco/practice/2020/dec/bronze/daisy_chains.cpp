// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=1060

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> p(n); for (int &i: p) cin >> i;
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = i; j < n; ++j) {
      double avg = 0;
      for (int x = i; x <= j; ++x) avg += p[x];
      avg /= (j - i + 1);
      for (int x = i; x <= j; ++x) if (p[x] == avg) { ans++; break; }
    }
  }
  cout << ans << '\n';
  return 0;
}
