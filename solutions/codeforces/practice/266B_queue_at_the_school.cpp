// CodeForces Problem Link: https://codeforces.com/problemset/problem/266/B

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t; cin >> n >> t;
  string s; cin >> s;
  while (t--) {
    for (int i = 0; i < s.size() - 1; ++i) {
      if (s[i] == 'B' && s[i + 1] == 'G') {
        char tmp = s[i];
        s[i] = s[i + 1];
        s[i + 1] = tmp;
        i++;
      }
    }
  }
  cout << s << '\n';
  return 0;
}
