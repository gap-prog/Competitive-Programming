// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=760

#include <bits/stdc++.h>
using namespace std;

vector<int> a, final, initial;

int main() {
  ifstream fin("shuffle.in");
  ofstream fout("shuffle.out");
  int n; fin >> n;
  a.resize(n + 1); final.resize(n + 1); initial.resize(n + 1);
  for (int i = 1; i <= n; ++i) fin >> a[i];
  for (int i = 1; i <= n; ++i) fin >> final[i];
  for (int i = 0; i < 3; ++i) {
    for (int j = 1; j <= n; ++j) initial[j] = final[a[j]];
    for (int j = 1; j <= n; ++j) final[j] = initial[j];
  }
  for (int i = 1; i <= n; ++i) fout << initial[i] << '\n';
  return 0;
}
