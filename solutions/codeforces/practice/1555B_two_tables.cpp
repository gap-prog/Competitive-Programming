// CodeForces Problem Link: https://codeforces.com/problemset/problem/1555/B

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int W, H, x1, y1, x2, y2, w, h;
    cin >> W >> H >> x1 >> y1 >> x2 >> y2 >> w >> h;
    int w1 = x2 - x1, h1 = y2 - y1;
    int pt = H - h, pr = W - w;
    int at = max(y2 - pt, 0), ar = max(x2 - pr, 0), ab = max(h - y1, 0), al = max(w - x1, 0);
    if (w1 + w > W) {
      ar = INT_MAX;
      al = INT_MAX;
    }
    if (h1 + h > H) {
      at = INT_MAX;
      ab = INT_MAX;
    }
    int res = min({at, ar, ab, al});
    cout << ((res == INT_MAX) ? -1 : res) << endl;
  }
  return 0;
}
