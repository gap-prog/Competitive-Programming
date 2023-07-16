// Cerealcodes Problem Link: https://codeforces.com/gym/103886/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll MAXN = 1e6;

vector<ll> A(MAXN);

int main() {
  ll n; cin >> n;
  for (int i = 0; i < n; ++i) {
    ll a; cin >> a; a--;
    A[a]++;
  }
  ll ans = 0, ct = n;
  for (int i = 0; i < MAXN; ++i) {
    if (A[i] > 0) {
      ans += ct;
      ct -= A[i];
    }
  }
  cout << ans << '\n';
  return 0;
}
