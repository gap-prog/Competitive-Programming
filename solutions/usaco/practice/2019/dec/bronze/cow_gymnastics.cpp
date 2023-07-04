// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=963

#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream fin("gymnastics.in");
  ofstream fout("gymnastics.out");
  int K, N; fin >> K >> N;
  vector<vector<int>> rank(K, vector<int>(N));
  for (int i = 0; i < K; ++i) {
    for (int j = 0; j < N; ++j) {
      fin >> rank[i][j];
      rank[i][j]--;
    }
  }
  vector<vector<int>> res(N, vector<int>(N));
  for (int i = 0; i < K; ++i) {
    for (int j = 0; j < N; ++j) {
      for (int k = j + 1; k < N; ++k) {
        res[rank[i][j]][rank[i][k]]++;
      }
    }
  }
  int ans = 0;
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      ans += res[i][j] == K;
    }
  }
  fout << ans << '\n';
  return 0;
}
