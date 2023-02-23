// Open Kattis Problem Link: https://open.kattis.com/contests/de4eaf/problems/cocktail

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t;
  cin >> n >> t;
  vector<int> v(n);
  for (auto &i: v) {
      cin >> i;
  }
  sort(v.rbegin(), v.rend());
  long long int ans = (n - 1) * t;
  if (ans >= v[0]) {
    cout << "NO" << "\n";
  }
  else {
    cout << "YES" << "\n";
  }
  return 0;
}
