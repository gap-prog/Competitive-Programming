// CSES Problem Link: https://cses.fi/problemset/task/1641

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x; cin >> n >> x;
  vector<array<int, 2>> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i][0];
    a[i][1] = i + 1;
  }
  sort(a.begin(), a.end());
  bool flag = false;
  for (int i = 0; i < n; ++i) {
    int l = 0, r = n - 1;
    while (l != r) {
      int sum = a[i][0] + a[l][0] + a[r][0];
      if (l != i && r != i && sum == x) {
        cout << a[i][1] << ' ' << a[l][1] << ' ' << a[r][1] << '\n';
        flag = true;
        break;
      }
      if (sum < x) l++;
      else r--;
    }
    if (flag) break;
  }
  if (!flag) cout << "IMPOSSIBLE\n";
}
