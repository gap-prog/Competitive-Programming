// CodeForces Problem Link: https://codeforces.com/problemset/problem/133/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  string p; cin >> p;
  bool found = false;
  for (int i = 0; i < p.size(); ++i) {
    if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9') {
      found = true;
      break;
    }
  }
  cout << (found ? "YES" : "NO") << '\n';
  return 0;
}
