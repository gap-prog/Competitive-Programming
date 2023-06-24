// CodeForces Problem Link: https://codeforces.com/problemset/problem/32/B

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  string ans = "";
  for (int i = 0; i < s.size(); ++i) {
    if (s[i] == '.') ans += '0';
    else if (s[i] == '-') {
      if (s[i + 1] == '-') ans += '2';
      else ans += '1';
      i++;
    }
  }
  cout << ans << '\n';
  return 0;
}
