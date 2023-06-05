// CodeForces Problem Link: https://codeforces.com/contest/1838/problem/B

#include <bits/stdc++.h>
using namespace std;

vector<int> pos(200000);

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    for (int i = 1; i <= n; ++i) {
      int p; cin >> p;
      pos[p] = i;
    }
    if (pos[n] < min(pos[1], pos[2])) cout << pos[n] << ' ' << min(pos[1], pos[2]) << '\n';
    else if (pos[n] > max(pos[1], pos[2])) cout << pos[n] << ' ' << max(pos[1], pos[2]) << '\n';
    else cout << pos[1] << ' ' << pos[2] << '\n';
  }
  return 0;
}
