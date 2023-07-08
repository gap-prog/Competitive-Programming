// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=893

#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream fin("guess.in");
  ofstream fout("guess.out");
  int n; fin >> n;
  vector<set<string>> animals(n);
  for (set<string> &i: animals) {
    string animal; fin >> animal;
    int k; fin >> k;
    while (k--) {
      string characteristic; fin >> characteristic;
      i.insert(characteristic);
    }
  }
  int MAX = INT_MIN;
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      set<string> intersection;
      set_intersection(
        begin(animals[i]), end(animals[i]),
        begin(animals[j]), end(animals[j]),
        inserter(intersection, begin(intersection))
      );
      MAX = max(MAX, (int) intersection.size() + 1);
    }
  }
  fout << MAX << '\n';
  return 0;
}
