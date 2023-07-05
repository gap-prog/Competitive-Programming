// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=736

#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream fin("cownomics.in");
  ofstream fout("cownomics.out");
  int n, m; fin >> n >> m;
  vector<vector<char>> spotted(n, vector<char>(m)), plain(n, vector<char>(m));
  for (vector<char> &i: spotted) for (char &j: i) fin >> j;
  for (vector<char> &i: plain) for (char &j: i) fin >> j;
  int ans = 0;
  for (int i = 0; i < m; ++i) {
    map<char, int> mp;
    for (int j = 0; j < n; ++j) mp[plain[j][i]]++;
    bool flag = true;
    for (int j = 0; j < n; ++j) if (mp[spotted[j][i]] > 0) { flag = false; break; }
    ans += flag;
  }
  fout << ans << '\n';
  return 0;
}
