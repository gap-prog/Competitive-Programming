// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=738

#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream fin("pairup.in");
  ofstream fout("pairup.out");
  int n; fin >> n;
  vector<array<int, 2>> v;
  for (int i = 0; i < n; ++i) {
    int x, y; fin >> x >> y;
    array<int, 2> arr = {y, x};
    v.emplace_back(arr);
  }
  sort(v.begin(), v.end());
  int ans = 0, l = 0, r = n - 1;
  while (l <= r) {
    int group = min(v[l][1], v[r][1]);
    group = (l == r ? group / 2 : group);
    ans = max(ans, v[l][0] + v[r][0]);
    v[l][1] -= group;
    v[r][1] -= group;
    if (v[l][1] == 0) l++;
    if (v[r][1] == 0) r--;
  }
  fout << ans << '\n';
  return 0;
}
