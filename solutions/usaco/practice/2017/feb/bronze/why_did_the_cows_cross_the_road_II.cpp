// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=712

#include <bits/stdc++.h>
using namespace std;

char ioc(int i) {
  char c = 'A' + i;
  return c;
}

int main() {
  ifstream fin("circlecross.in");
  ofstream fout("circlecross.out");
  string s; fin >> s;
  int ans = 0;
  for (int i = 0; i < 26; ++i) {
    for (int j = 0; j < 26; ++j) {
      int cow1_1 = s.find_first_of(ioc(i));
      int cow1_2 = s.find_last_of(ioc(i));
      int cow2_1 = s.find_first_of(ioc(j));
      int cow2_2 = s.find_last_of(ioc(j));
      if (cow1_1 < cow2_1 && cow2_1 < cow1_2 && cow1_2 < cow2_2) ans++;
    }
  }
  fout << ans << '\n';
  return 0;
}
