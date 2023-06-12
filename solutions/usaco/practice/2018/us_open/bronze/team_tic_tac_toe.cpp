// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=831

#include <bits/stdc++.h>
using namespace std;

int one, two;
vector<set<char>> v;

void check(char c1, char c2, char c3) {
  set<char> s; s.insert(c1); s.insert(c2); s.insert(c3);
  bool flag = true;
  for (set<char> &i: v)  if (s == i) flag = false;
  if (flag) {
    if (s.size() == 1) one++;
    else if (s.size() == 2) two++;
    v.push_back(s);
  }
}

int main() {
  ifstream fin("tttt.in");
  ofstream fout("tttt.out");
  vector<vector<char>> v(3, vector<char>(3)); for (vector<char> &i: v) for (char &j: i) fin >> j;
  check(v[0][0], v[1][1], v[2][2]);
  check(v[0][2], v[1][1], v[2][0]);
  for (vector<char> &i: v) check(i[0], i[1], i[2]);
  for (int i = 0; i < 3; ++i) check(v[0][i], v[1][i], v[2][i]);
  fout << one << '\n' << two << '\n';
  return 0;
}
