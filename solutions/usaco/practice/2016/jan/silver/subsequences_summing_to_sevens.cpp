// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=595

#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream fin("div7.in");
  ofstream fout("div7.out");
  int n; fin >> n;
  vector<int> prefix(n + 1);
  for (int i = 0; i < n; ++i) {
    int a; fin >> a;
    prefix[i + 1] = (prefix[i] + a) % 7;
  }
  int MAXN = INT_MIN;
  vector<int> initial(7, -1);
  for (int i = 0; i < n; ++i) {
    if (initial[prefix[i]] == -1) initial[prefix[i]] = i;
    else MAXN = max(MAXN, i - initial[prefix[i]]);
  }
  fout << MAXN << '\n';
  return 0;
}
