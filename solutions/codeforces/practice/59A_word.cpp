// CodeForces Problem Link: https://codeforces.com/problemset/problem/59/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  int low = 0, up = 0;
  for (int i = 0; i < s.size(); ++i) {
    if (islower(s[i])) low++;
    else up++;
  }
  transform(s.begin(), s.end(), s.begin(), ((low > up || low == up) ? ::tolower : ::toupper));
  cout << s << '\n';
  return 0;
}
