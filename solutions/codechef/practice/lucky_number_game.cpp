// CodeChef Problem Link: https://www.codechef.com/problems/HP18

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, a, b; cin >> n >> a >> b;
  vector<int> v(n);
  int bob = 0, alice = 0, both = 0;
  for (int &i: v) {
    cin >> i;
    if (i % a == 0 && i % b == 0) both++;
    if (i % a == 0) bob++;
    if (i % b == 0) alice++;
  }
  if (both != 0 && bob == 0 && alice == 0) cout << "BOB" << '\n';
  else if (both == 0 && bob == 0 && alice == 0) cout << "ALICE" << '\n';
  else if (both == 0) {
    if (alice >= bob) cout << "ALICE" << '\n';
    else cout << "BOB" << '\n';
  }
  else {
    if (alice > bob) cout << "ALICE" << '\n';
    else cout << "BOB" << '\n';
  }
}

int main() {
  int t; cin >> t;
  while (t--) solve();
}
