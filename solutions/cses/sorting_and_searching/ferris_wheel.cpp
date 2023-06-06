// CSES Problem Link: https://cses.fi/problemset/task/1090/

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5;

int n, x, p[MAXN], i, j, ans;
bool done[MAXN];

int main() {
  int n, x; cin >> n >> x;
  for (int i = 0; i < n; ++i) cin >> p[i];
  sort(p, p + n);
  i = 0; j = n - 1;
  while (i < j) {
    if (p[i] + p[j] > x) j--;
    else {
      ans++;
      done[i] = done[j] = true;
      i++; j--;
    }
  }
  for (int i = 0; i < n; ++i) ans += done[i] == false;
  cout << ans << '\n';
  return 0;
}
