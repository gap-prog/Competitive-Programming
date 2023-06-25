// CodeForces Problem Link: https://codeforces.com/problemset/problem/80/A

#include <bits/stdc++.h>
using namespace std;

bool is_prime(int num) {
  if (num == 1) return false;
  for (int i = 2; i * i <= num; ++i) {
    if (num % i == 0) return false;
  }
  return true;
}

int main() {
  int n, m; cin >> n >> m;
  while (true) {
    n++;
    if (is_prime(n)) {
      if (n == m) cout << "YES" << '\n';
      else cout << "NO" << '\n';
      break;
    }
  }
  return 0;
}
