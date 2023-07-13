// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=691

#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream fin("hps.in");
  ofstream fout("hps.out");
  int n; fin >> n;
  vector<int> h(n + 1), p(n + 1), s(n + 1);
  for (int i = 0; i < n; ++i) {
    h[i + 1] = h[i]; p[i + 1] = p[i]; s[i + 1] = s[i];
    char choice; fin >> choice;
    if (choice == 'H') p[i + 1]++;
    else if (choice == 'P') s[i + 1]++;
    else h[i + 1]++;
  }
  int ans = INT_MIN;
  for (int i = 1; i <= n; ++i) {
    int before = max({h[i], p[i], s[i]});
    int after = max({h[n] - h[i], p[n] - p[i], s[n] - s[i]});
    ans = max(ans, before + after);
  }
  fout << ans << '\n';
  return 0;
}
