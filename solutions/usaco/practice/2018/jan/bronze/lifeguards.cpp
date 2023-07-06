// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=784

#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream fin("lifeguards.in");
  ofstream fout("lifeguards.out");
  int n; fin >> n;
  vector<pair<int, int>> lifeguard(n); for (pair<int, int> &i: lifeguard) fin >> i.first >> i.second;
  int MAX = INT_MIN;
  for (int i = 0; i < n; ++i) {
    int ans = 0;
    vector<int> times(1001, 0);
    for (int j = 0; j < n; ++j) if (i != j) fill(times.begin() + lifeguard[j].first, times.begin() + lifeguard[j].second, 1);
    for (int &i: times) if (i == 1) ans++;
    MAX = max(MAX, ans);
  }
  fout << MAX << '\n';
  return 0;
}
