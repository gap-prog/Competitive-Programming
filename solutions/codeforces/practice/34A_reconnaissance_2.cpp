// CodeForces Problem Link: https://codeforces.com/problemset/problem/34/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n + 1);
  for (int i = 1; i <= n; ++i) cin >> a[i];
  int diff = abs(a[n] - a[1]), loc1 = 1, loc2 = n;
  for (int i = 2; i <= n; ++i) {
    if (abs(a[i] - a[i - 1]) <= diff) {
      diff = abs(a[i] - a[i - 1]);
      loc1 = i; loc2 = i - 1;
    }
  }
  cout << loc1 << ' ' << loc2 << '\n';
  return 0;
}
