// CodeForces Problem Link: https://codeforces.com/problemset/problem/339/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  if (s.length() == 1) {
    cout << s[0] << endl;
  } else {
    sort(s.begin(), s.end());
    for (int i = 0; i < s.length() - 1; ++i) {
      if (s[i] != '+') {
        cout << s[i] << '+';
      }
    }
    cout << s[s.length() - 1] << endl;
  }
}
