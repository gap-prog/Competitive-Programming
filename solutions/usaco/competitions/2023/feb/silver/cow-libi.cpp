// USACO Problem Link: http://usaco.org/index.php?page=viewproblem2&cpid=1303

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
  int g;
  int n;
  cin >> g >> n;
  vector<array<int, 3>> crimes(g), cows(n);
  for (int i = 0; i < g; i++) cin >> crimes[i][1] >> crimes[i][2] >> crimes[i][0];
  for (int i = 0; i < n; ++i) cin >> cows[i][1] >> cows[i][2] >> cows[i][0];
  sort(begin(crimes), end(crimes)); sort(begin(cows), end(cows));
  int num_good = n, idx = 0;
  ll time = crimes[0][0], x = crimes[0][1], y = crimes[0][2];
  while (idx < n && cows[idx][0] < crimes[0][0]) {
    array<int, 3> cow = cows[idx];
    idx++;
    ll t = (ll) (crimes[0][0] - cow[0]) * (ll) (crimes[0][0] - cow[0]), x_dist = (ll) (crimes[0][1] - cow[1]) * (ll) (crimes[0][1] - cow[1]), y_dist = (ll) (crimes[0][2] - cow[2]) * (ll) (crimes[0][2] - cow[2]);
    if (t >= x_dist + y_dist) num_good -= 1;
  }
  for (int i = 1; i < g; ++i) {
    while (idx < n && cows[idx][0] < crimes[i][0]) {
      array<int, 3> cow = cows[idx];
      idx++;
      ll t1 = (ll) (cow[0] - time) * (ll) (cow[0] - time), x1_dist = (ll) (cow[1] - x) * (ll) (cow[1] - x), y1_dist = (ll) (cow[2] - y) * (ll) (cow[2] - y);
      ll t2 = (ll) (crimes[i][0] - cow[0]) * (ll) (crimes[i][0] - cow[0]), x2_dist = (ll) (crimes[i][1] - cow[1]) * (ll) (crimes[i][1] - cow[1]), y2_dist = (ll) (crimes[i][2] - cow[2]) * (ll) (crimes[i][2] - cow[2]);
      if (t1 >= x1_dist + y1_dist && t2 >= x2_dist + y2_dist) num_good -= 1;
    }
    time = crimes[i][0];
    x = crimes[i][1];
    y = crimes[i][2];
  }
  while (idx < n) {
    array<int, 3> cow = cows[idx];
    idx++;
    ll t = (ll) (cow[0] - time) * (ll) (cow[0] - time), x_dist = (ll) (cow[1] - x) * (ll) (cow[1] - x), y_dist = (ll) (cow[2] - y) * (ll) (cow[2] - y);
    if (t >= x_dist + y_dist) num_good -= 1;
  }
  cout << num_good << endl;
  return 0;
}
