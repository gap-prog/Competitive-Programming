#include <bits/stdc++.h>
using namespace std;

int getSum(int num) {
  int sum = 0;
  while (num != 0) {
    sum += num % 10;
    num /= 10;
  }
  return sum;
}

int main() {
  int n, m; cin >> n >> m;
  vector<pair<int, int>> a(n);
  for (int i = 0; i < n; ++i) {
    int num; cin >> num;
    a[i].first = getSum(num) % 13;
    a[i].second = num;
  }
  sort(a.begin(), a.end(), [&](const pair<int, int> &p1, const pair<int, int> &p2) {
    if (p1.first == p2.first) { return p1.second > p2.second; }
    return p1.first > p2.first;
  });
  for (int i = 0; i < m; ++i) cout << a[i].second << '\n';
  return 0;
}
