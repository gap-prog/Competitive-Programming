// CodeForces Problem Link: https://atcoder.jp/contests/abc312/tasks/abc312_a

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  bool flag = false;
  if (s == "ACE" || s == "BDF" || s == "CEG" || s == "DFA" || s == "EGB" || s == "FAC" || s == "GBD") flag = true;
  cout << (flag ? "Yes\n" : "No\n");
  return 0;
}
