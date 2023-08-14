// CodeForces Problem Link: https://codeforces.com/problemset/problem/352/B

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  map<int, vector<int>> mp;
  for (int i = 0; i < n; ++i) {
    int a; cin >> a;
    mp[a].emplace_back(i);
  }
  int ct = 0;
  vector<pair<int, int>> valid;
  for (auto a : mp) {
    if (a.second.size() == 1) {
      ct++;
      valid.emplace_back(make_pair(a.first, 0));
    } else {
      int diff = a.second[1] - a.second[0];
      bool flag = true;
      for (int i = 1; i < (int) a.second.size() - 1; ++i) {
        if (a.second[i + 1] - a.second[i] != diff) {
          flag = false;
          break;
        }
      }
      if (flag) {
        ct++;
        valid.emplace_back(make_pair(a.first, diff));
      }
    }
  }
  cout << ct << '\n';
  for (pair<int, int> &i: valid) cout << i.first << ' ' << i.second << '\n';
  return 0;
}
