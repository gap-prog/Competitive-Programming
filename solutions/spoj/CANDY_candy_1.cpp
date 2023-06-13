// SPOJ Problem Link: https://www.spoj.com/status/CANDY,gpprog/

#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    int n; cin >> n;
    if (n == -1) break;
    vector<int> v(n);
    int sum = 0;
    for (int &i: v) {
      cin >> i;
      sum += i;
    }
    if (sum % n != 0) cout << -1 << '\n';
    else {
      int mn = 0;
      sum /= n;
      for (int i = 0; i < n; ++i) if (v[i] > sum) mn += (v[i] - sum);
      cout << mn << '\n';
    }
  }
  return 0;
}
