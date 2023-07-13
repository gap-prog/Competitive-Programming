// CSES Problem Link: https://cses.fi/problemset/task/1661

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  int n, x; cin >> n >> x;
  vector<ll> a(n); for (ll &i: a) cin >> i;
  ll ans = 0, curr = 0;
  map<ll, int> prefix; prefix[0] = 1;
  for (ll &i: a) {
    curr += i;
    ans += prefix[curr - x];
    prefix[curr]++;
  }
  cout << ans << '\n';
  return 0;
}
