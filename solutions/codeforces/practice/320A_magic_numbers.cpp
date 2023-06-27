// CodeForces Problem Link: https://codeforces.com/problemset/problem/320/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  bool flag = true;
  for (int i = 0; i < s.size(); ++i) {
    if (s[i] != '1' && s[i] != '4') {
      flag = false;
      break;
    }
  }
  if (s[0] != '1') flag = false;
  if (s.find("444") != s.npos) flag = false;
  cout << (flag ? "YES" : "NO") << '\n';
}
