// CodeForces Problem Link: https://codeforces.com/contest/451/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  if (min(n, m) % 2 == 0) cout << "Malvika" << '\n';
  else cout << "Akshat" << '\n';
  return 0;
}
