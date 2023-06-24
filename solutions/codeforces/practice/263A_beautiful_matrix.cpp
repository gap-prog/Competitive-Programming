// CodeForces Problem Link: https://codeforces.com/problemset/problem/263/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<int>> v(5, vector<int>(5));
  pair<int, int> p;
  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 5; ++j) {
      int num; cin >> num;
      if (num == 1) { p.first = i + 1; p.second = j + 1; }
    }
  }
  cout << (abs(p.first - 3) + abs(p.second - 3)) << '\n';
  return 0;
}
