// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=739

#include <bits/stdc++.h>
using namespace std;

set<string> st;
string str = "...";

int main() {
  ifstream fin("cownomics.in");
  ofstream fout("cownomics.out");
  int n, m; fin >> n >> m;
  vector<string> spotted(n), plain(n);
  for (string &i: spotted) fin >> i;
  for (string &i: plain) fin >> i;
  int ans = 0;
  for (int i = 0; i < m; ++i) {
    for (int j = i + 1; j < m; ++j) {
      for (int k = j + 1; k < m; ++k) {
        st.clear();
        bool check = true;
        for (int x = 0; x < n; ++x) {
          str[0] = spotted[x][i];
          str[1] = spotted[x][j];
          str[2] = spotted[x][k];
          st.insert(str);
        }
        for (int x = 0; x < n; ++x) {
          str[0] = plain[x][i];
          str[1] = plain[x][j];
          str[2] = plain[x][k];
          if (st.count(str)) {
            check = false;
            break;
          }
        }
        ans += check;
      }
    }
  }
  fout << ans << '\n';
  return 0;
}
