// CodeForces Problem Link: https://codeforces.com/problemset/problem/61/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s1, s2; cin >> s1 >> s2;
  string ans = "";
  for (int i = 0; i < s1.size(); ++i) {
    if (s1[i] == s2[i]) ans += '0';
    else ans += '1';
  }
  cout << ans << '\n';
  return 0;
}
