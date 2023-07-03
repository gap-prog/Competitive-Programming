// CodeForces Problem Link: https://codeforces.com/problemset/problem/734/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  string s; cin >> s;
  int a = 0, d = 0;
  for (int i = 0; i < n; ++i) {
    if (s[i] == 'A') a++;
    else d++;
  }
  cout << (a == d ? "Friendship" : (a > d ? "Anton" : "Danik")) << '\n';
  return 0;
}
