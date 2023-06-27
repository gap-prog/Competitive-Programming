// CodeForces Problem Link: https://codeforces.com/problemset/problem/43/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  map<string, int> mp;
  for (int i = 0; i < n; ++i) {
    string team; cin >> team;
    mp[team]++;
  }
  string t;
  int ct = INT_MIN;
  for (auto i: mp) {
    if (i.second > ct) {
      t = i.first;
      ct = i.second;
    }
  }
  cout << t << '\n';
  return 0;
}
