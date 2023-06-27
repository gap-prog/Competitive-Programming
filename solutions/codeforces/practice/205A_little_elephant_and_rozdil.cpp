// CodeForces Problem Link: https://codeforces.com/problemset/problem/205/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int mn = INT_MAX, ct = 0, pos = -1;
  for (int i = 0; i < n; ++i) {
    int city; cin >> city;
    if (city < mn) {
      mn = city;
      ct = 1;
      pos = i + 1;
    } else if (city == mn) ct++;
  }
  if (ct == 1) cout << pos << '\n';
  else cout << "Still Rozdil" << '\n';
  return 0;
}
