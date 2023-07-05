// CodeForces Problem Link: https://codeforces.com/problemset/problem/977/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ll n, k; cin >> n >> k;
  while (k--) {
    if (n % 10 == 0) n /= 10;
    else n -= 1;
  }
  cout << n << '\n';
  return 0;
}
