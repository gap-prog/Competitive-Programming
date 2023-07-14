// CSES Problem Link: https://cses.fi/problemset/task/1624/

#include <bits/stdc++.h>
using namespace std;

int ans;
vector<vector<bool>> block(8, vector<bool>(8));
vector<bool> taken(8), d1(15), d2(15);

void search(int ct) {
  if (ct == 8) { ans++; return; }
  for (int i = 0; i < 8; ++i) {
    if (!block[i][ct] && !taken[i] && (!d1[i + ct] && !d2[i - ct + 7])) {
      taken[i] = d1[i + ct] = d2[i - ct + 7] = true;
      search(ct + 1);
      taken[i] = d1[i + ct] = d2[i - ct + 7] = false;
    }
  }
}

int main() {
  for (int i = 0; i < 8; ++i) {
    string row; cin >> row;
    for (int j = 0; j < 8; ++j) block[i][j] = (row[j] == '*');
  }
  search(0);
  cout << ans << '\n';
  return 0;
}
