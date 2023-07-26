#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
  int n; cin >> n;
  vector<ll> a(n), even, odd;
  for (ll &i: a) {
    cin >> i;
    if (i % 2 == 0) even.emplace_back(i);
    else odd.emplace_back(i);
  }
  sort(begin(even), end(even)); sort(begin(odd), end(odd));
  vector<ll> final;
  int e = 0, o = 0;
  for (int i = 0; i < n; ++i) {
    if (a[i] % 2 == 0) {
      final.emplace_back(even[e]);
      e++;
    } else {
      final.emplace_back(odd[o]);
      o++;
    }
  }
  sort(begin(a), end(a));
  cout << (final == a ? "YES\n" : "NO\n");
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
