// USACO Problem Link: http://usaco.org/index.php?page=viewproblem2&cpid=1304

// TCS 14-20 (TLE)

#include <bits/stdc++.h>
using namespace std;

void dfs(int n1, int n2, vector<int> &v1, vector<int> &v2, vector<vector<array<int, 3>>> &v3) {
  if (v2[n1] != -1 && v2[n1] <= n2) return; v2[n1] = n2;
  for (auto &i: v3[n1]) {
    if (((n1 == 1 && !v2[n1]) && (i[0] >= n2)) || (i[0] >= n2 + v1[n1])) dfs(i[1], i[2], v1, v2, v3);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, m;
  cin >> n >> m;
  vector<int> v1(n + 1), v2(n + 1);
  fill(begin(v2), end(v2), -1);
  vector<vector<array<int, 3>>> v3(n + 1);
  for (int i = 0; i < m; ++i) {
    int num;
    array<int, 3> arr;
    cin >> num >> arr[0] >> arr[1] >> arr[2];
    v3[num].push_back(arr);
  }
  for (int i = 1; i < n; ++i) cin >> v1[i];
  dfs(1, 0, v1, v2, v3);
  for (int i = 1; i <= n; ++i) cout << v2[i] << endl;
  return 0;
}
