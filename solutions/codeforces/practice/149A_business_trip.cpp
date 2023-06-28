// CodeForces Problem Link: https://codeforces.com/problemset/problem/149/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  int k; cin >> k;
  vector<int> a(12); for (int &i: a) cin >> i;
  sort(a.rbegin(), a.rend());
  int ans = -1, sum = 0;
  for (int i = 0; i < 12; ++i) {
    sum += a[i];
    if (sum >= k) {
      ans = i + 1;
      break;
    }
  }
  if (k == 0) ans = 0;
  cout << ans << '\n';
  return 0;
}
