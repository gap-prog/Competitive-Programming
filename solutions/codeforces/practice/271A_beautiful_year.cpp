// CodeForces Problem Link: https://codeforces.com/problemset/problem/271/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  int y; cin >> y;
  while (true) {
    y++;
    set<char> s;
    string ys = to_string(y);
    for (int i = 0; i < ys.size(); ++i) s.insert(ys[i]);
    if (s.size() == ys.size()) {
      cout << ys << '\n';
      break;
    }
  }
  return 0;
}
