// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=735

#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream fin("lostcow.in");
  ofstream fout("lostcow.out");
  int x, y; fin >> x >> y;
  int dist = 0, change = 1, direction = 1;
  while (true) {
    if ((direction == 1 && x <= y && y <= x + change) || (direction == -1 && x >= y && x - change <= y)) {
      dist += abs(y - x);
      fout << dist << '\n';
      break;
    }
    change *= 2;
    direction *= -1;
    dist += change;
  }
  return 0;
}
