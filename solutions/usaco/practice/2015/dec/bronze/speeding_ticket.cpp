// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=568

#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream fin("speeding.in");
  ofstream fout("speeding.out");
  int n, m; fin >> n >> m;
  vector<int> road(100), bessie(100);
  int start = 0, size, speed;
  for (int i = 0; i < n; ++i) {
    fin >> size >> speed;
    for (int j = start; j < start + size; ++j) road[j] = speed;
    start += size;
  }
  start = 0;
  for (int i = 0; i < m; ++i) {
    fin >> size >> speed;
    for (int j = start; j < start + size; ++j) bessie[j] = speed;
    start += size;
  }
  int ans = 0;
  for (int i = 0; i < 100; ++i) ans = max(ans, bessie[i] - road[i]);
  fout << ans << '\n';
  return 0;
}
