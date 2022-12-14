// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=713

#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("cowqueue.in", "r", stdin);
	freopen("cowqueue.out", "w", stdout);
	int n;
	cin >> n;
  vector<pair<int, int>> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> v[i].first >> v[i].second;
  }
  sort(v.begin(), v.end());
  int time = 0;
  for (int i = 0; i < n; ++i) 
    if (time > v[i].first) {
      time += v[i].second;
    } else {
      time = v[i].first + v[i].second;
    }
  }
  cout << time << endl;
}
