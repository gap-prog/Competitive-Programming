// Advent of Code Problem Link: https://adventofcode.com/2022/day/1

#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream fin("input.txt");
  string s;
  int ans = 0, curr = 0;
  while (getline(fin, s)) {
    if (s.empty()) {
      ans = max(ans, curr);
      curr = 0;
      continue;
    } else curr += stoi(s);
  }
  ans = max(ans, curr);
  cout << ans << '\n';
  return 0;
}
