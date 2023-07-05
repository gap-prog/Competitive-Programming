// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=1061

#include <bits/stdc++.h>
using namespace std;

int N;
vector<array<int, 3>> north, east;

bool cmpN(const array<int, 3> &arr1, const array<int, 3> &arr2) { return arr1[0] < arr2[0]; }

bool cmpE(const array<int, 3> &arr1, const array<int, 3> &arr2) { return arr1[1] < arr2[1]; }

int main() {
  cin >> N;
  for (int i = 0; i < N; ++i) {
    char dir; cin >> dir;
    int x, y; cin >> x >> y;
    if (dir == 'N') north.emplace_back(array<int, 3>{x, y, i});
    else east.emplace_back(array<int, 3>{x, y, i});
  }
  sort(begin(north), end(north), cmpN); sort(begin(east), end(east), cmpE);
  vector<int> stop(N, -1);
  for (const array<int, 3> &i: north) {
    for (const array<int, 3> &j: east) {
      if (i[0] > j[0] && i[1] < j[1]) {
        int distn = j[1] - i[1], diste = i[0] - j[0];
        if (distn < diste && stop[j[2]] == -1) stop[j[2]] = i[0];
        if (distn > diste && stop[j[2]] == -1) { stop[i[2]] = j[1]; break; }
      }
    }
  }
  vector<int> ans(N, -1);
  for (array<int, 3> &i: north) if (stop[i[2]] != -1) ans[i[2]] = stop[i[2]] - i[1];
  for (array<int, 3> &i: east) if (stop[i[2]] != -1) ans[i[2]] = stop[i[2]] - i[0];
  for (int &i: ans) cout << (i == -1 ? "Infinity" : to_string(i)) << '\n';
}
