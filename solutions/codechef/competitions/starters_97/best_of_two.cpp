#include <bits/stdc++.h>
using namespace std;

void solve() {
  vector<int> a(3), b(3);
  for (int &i: a) cin >> i;
  for (int &i: b) cin >> i;
  sort(begin(a), end(a)); sort(begin(b), end(b));
  int score_a = a[1] + a[2], score_b = b[1] + b[2];
  cout << (score_a == score_b ? "Tie" : (score_a > score_b ? "Alice" : "Bob")) << '\n';
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
