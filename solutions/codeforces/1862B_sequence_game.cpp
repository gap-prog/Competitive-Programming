// CodeForces Problem Link: https://codeforces.com/contest/1862/problem/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> a;
  for (int i = 0; i < n; ++i) {
    int b; cin >> b;
    if (i > 0 && a.back() > b)
      a.emplace_back(1);
    a.emplace_back(b);
  }
  int len = (int) a.size();
  cout << len << '\n';
  for (int i = 0; i < len; ++i)
    cout << a[i] << " \n"[i == len - 1]; 
  return;
}

int main() {
  int t; cin >> t;
  while (t--)
    solve();
  return 0;
}
