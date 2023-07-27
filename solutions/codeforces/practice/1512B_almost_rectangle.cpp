// CodeForces Problem Link: https://codeforces.com/contest/1512/problem/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  vector<vector<char>> v(n, vector<char>(n));
  pair<int, int> p1 = {-1, -1}, p2 = {-1, -1}, p3 = {-1, -1}, p4 = {-1, -1};
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> v[i][j];
      if (v[i][j] == '*') {
        if (p1.first + p1.second == -2) {
          p1.first = i;
          p1.second = j;
        } else {
          p2.first = i;
          p2.second = j;
        }
      }
    }
  }
  if (p1.first != p2.first && p1.second != p2.second) {
    p3.first = p1.first;
    p3.second = p2.second;
    p4.first = p2.first;
    p4.second = p1.second;
  } else if (p1.first == p2.first && p1.second != p2.second) {
    if (p1.first + 1 < n) {
      p3.first = p1.first + 1;
      p3.second = p1.second;
      p4.first = p2.first + 1;
      p4.second = p2.second;
    } else {
      p3.first = p1.first - 1;
      p3.second = p1.second;
      p4.first = p2.first - 1;
      p4.second = p2.second;
    }
  } else if (p1.first != p2.first && p1.second == p2.second) {
    if (p1.second + 1 < n) {
      p3.first = p1.first;
      p3.second = p1.second + 1;
      p4.first = p2.first;;
      p4.second = p2.second + 1;
    } else {
      p3.first = p1.first;
      p3.second = p1.second - 1;
      p4.first = p2.first;
      p4.second = p2.second - 1;
    }
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (i == p3.first && j == p3.second) cout << '*';
      else if (i == p4.first && j == p4.second) cout << '*';
      else cout << v[i][j];
    }
    cout << '\n';
  }
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
