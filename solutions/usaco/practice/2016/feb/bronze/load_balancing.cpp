// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=617

#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream fin("balancing.in");
  ofstream fout("balancing.out");
  int n, b; fin >> n >> b;
  vector<int> x(n), y(n);
  set<int> xfence, yfence;
  for (int i = 0; i < n; ++i) {
    fin >> x[i] >> y[i];
    xfence.insert(x[i] + 1);
    yfence.insert(y[i] + 1);
  }
  int ans = INT_MAX;
  for (int i: xfence) {
    for (int j: yfence) {
      int q1 = 0, q2 = 0, q3 = 0, q4 = 0;
      for (int k = 0; k < n; ++k) {
        if (x[k] > i && y[k] > j) q1++;
        else if (x[k] < i && y[k] > j) q2++;
        else if (x[k] < i && y[k] < j) q3++;
        else q4++;
      }
      ans = min(ans, max({q1, q2, q3, q4}));
    }
  }
  fout << ans << '\n';
  return 0;
}
