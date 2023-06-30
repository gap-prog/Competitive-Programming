// CodeForces Problem Link: https://codeforces.com/problemset/problem/96/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  int mx0 = 0, ct0 = 0, mx1 = 0, ct1 = 0;
  for (int i = 0; i < s.size(); ++i) {
    if (s[i] == '1') {
      ct1++;
      mx0 = max(mx0, ct0);
      ct0 = 0;
    } else {
      ct0++;
      mx1 = max(mx1, ct1);
      ct1 = 0;
    }
  }
  mx0 = max(mx0, ct0); mx1 = max(mx1, ct1);
  cout << ((mx0 >= 7 || mx1 >= 7) ? "YES" : "NO") << '\n';
  return 0;
}
