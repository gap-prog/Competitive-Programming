// CodeChef Problem Link: https://www.codechef.com/problems/SWAPNUM31

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
  ll n, k; cin >> n >> k;
  vector<ll> a(n); for (ll &i: a) cin >> i;
  int l = 0, r = n - 1;
  while (r - l >= k) l++; while (r >= k) r--;
  if (l > r) {
    sort(begin(a), end(a));
    for (ll &i: a) cout << i << ' ';
    cout << '\n';
  } else {
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for (int i = 0; i < l; ++i) pq.push(a[i]);
    for (int i = r + 1; i < n; ++i) pq.push(a[i]);
    for (int i = 0; i < l; ++i) {
      cout << pq.top() << ' ';
      pq.pop();
    }
    for (int i = l; i <= r; ++i) cout << a[i] << ' ';
    for (int i = r + 1; i < n; ++i) {
      cout << pq.top() << ' ';
      pq.pop();
    }
    cout << '\n';
  }
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
