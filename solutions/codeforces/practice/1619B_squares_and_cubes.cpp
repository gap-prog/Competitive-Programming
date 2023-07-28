// CodeForces Problem Link: https://codeforces.com/contest/1619/problem/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  set<int> st;
  for (int i = 1; i * i <= n; ++i) st.insert(i * i);
  for (int i = 1; i * i * i <= n; ++i) st.insert(i * i * i);
  cout << ((int) st.size()) << '\n';
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
