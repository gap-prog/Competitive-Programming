// Open Kattis Problem Link: https://open.kattis.com/problems/babypanda

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll binpow(ll a, ll b) {
  ll res = 1;
  while (b > 0) {
    if (b & 1) res *= a;
    a *= a;
    b >>= 1;
  }
  return res;
}

int main() {
  ll n, m;
  cin >> n >> m;
  int ct = 0;
  while (m > 0) {
    m -= binpow(2, (int) log2(m));
    ct++;
  }
  cout << ct << '\n';
  return 0;
}
