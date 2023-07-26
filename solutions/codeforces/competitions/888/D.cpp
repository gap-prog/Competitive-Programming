#include <bits/stdc++.h>
using namespace std;
#define ll long long

set<int> s;
bool check;

void solve() {
  ll n, start = -1; cin >> n;
  s.insert(n);
  check = true;
  vector<ll> v(n - 1);
  for (int i = 0; i < n - 1; ++i) {
    cin >> v[i];
    s.insert(i + 1);
  }
  for (int i = 0; i < n - 1; ++i) {
    ll res;
    if (i == 0) res = v[0];
    else res = v[i] - v[i - 1];
    if (s.find(res) != s.end()) s.erase(s.find(res));
    else {
      if (start == -1) start = res;
      else {
        if (i == 0) check = false;
        else { check = false; break; }
      }
    }
  }
  if (!check) { cout << "NO\n"; return; }
  ll ans = 0, N = n * (n + 1) / 2;
  for (auto i: s) ans += i;
  if (start == -1) cout << (N - v[n - 2] == ans ? "YES\n" : "NO\n");
  else cout << (start == ans ? "YES\n" : "NO\n");
}

int main() {
  int t; cin >> t;
  while (t--) {
    s.clear();
    solve();
  }
  return 0;
}
