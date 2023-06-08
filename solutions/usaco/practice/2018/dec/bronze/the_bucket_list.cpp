// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=856

#include <bits/stdc++.h>
using namespace std;

int s[101], t[101], b[101], start[1001], stop[1001];

int solve() {
  int ans = 0, curr = 0;
  for (int i = 1; i <= 1001; ++i) {
    if (start[i]) curr += b[start[i]];
    ans = max(ans, curr);
    if (stop[i]) curr -= b[stop[i]];
  }
  return ans;
}

int main() {
  ifstream fin("blist.in");
  ofstream fout("blist.out");
  int n; fin >> n;
  for (int i = 1; i <= n; ++i) {
    fin >> s[i] >> t[i] >> b[i];
    start[s[i]] = i; stop[t[i]] = i;
  }
  fout << solve() << '\n';
  return 0;
}
