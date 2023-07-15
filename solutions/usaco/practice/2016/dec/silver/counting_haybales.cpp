// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=666

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) begin(x), end(x)
#define lb(x, bound) lower_bound(all(x), bound)
#define ub(x, bound) upper_bound(all(x), bound)


int main() {
  ifstream fin("haybales.in");
  ofstream fout("haybales.out");
  int n, q; fin >> n >> q;
  vector<int> haybales(n); for (int &i: haybales) fin >> i;
  sort(all(haybales));
  while (q--) {
    int initial, final; fin >> initial >> final;
    fout << (ub(haybales, final) - lb(haybales, initial)) << '\n';
  }
  return 0;
}
