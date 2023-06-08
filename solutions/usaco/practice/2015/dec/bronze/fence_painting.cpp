// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=567

#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d; cin >> a >> b >> c >> d;
  int ans = 0;
  for (int i = 0; i < 100; ++i) {
    if (i >= a && i + 1 <= b) ans++;
    else if (i >= c && i + 1 <= d) ans++;
  }
  cout << ans << '\n';
  return 0;
}
