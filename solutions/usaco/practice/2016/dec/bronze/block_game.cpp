// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=664

#include <bits/stdc++.h>
using namespace std;

vector<int> v(26), s1(26), s2(26);

int main() {
  ifstream fin("blocks.in");
  ofstream fout("blocks.out");
  int n; fin >> n;
  vector<pair<string, string>> p(n);
  for (int i = 0; i < n; ++i) {
    fin >> p[i].first >> p[i].second;
    for (int j = 0; j < p[i].first.length(); ++j) s1[p[i].first[j] - 'a']++;
    for (int j = 0; j < p[i].second.length(); ++j) s2[p[i].second[j] - 'a']++;
    for (int j = 0; j < 26; ++j) v[j] += max(s1[j], s2[j]);
    fill(s1.begin(), s1.end(), 0); fill(s2.begin(), s2.end(), 0);
  }
  for (int &i: v) fout << i << '\n';
  return 0;
}
