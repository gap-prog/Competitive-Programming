// USACO Training Pages Problem Link: https://train.usaco.org/usacoprob2?a=5pUH1nDfZER&S=transform

#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<char>> before, after;

vector<vector<char>> rotate(vector<vector<char>> initial) {
  vector<vector<char>> transformed = initial;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) transformed[j][n - 1 - i] = initial[i][j];
  }
  return transformed;
}

vector<vector<char>> reflect(vector<vector<char>> initial) {
  vector<vector<char>> transformed = initial;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) transformed[i][n - 1 - j] = initial[i][j];
  }
  return transformed;
}

bool equal(vector<vector<char>> transformed) {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) if (transformed[i][j] != after[i][j]) return false;
  }
  return true;
}

int main() {
  ifstream fin("transform.in");
  ofstream fout("transform.out");
  fin >> n;
  before.resize(n);
  for (int i = 0; i < n; ++i) {
    before[i].resize(n);
    for (int j = 0; j < n; ++j) fin >> before[i][j];
  }
  after.resize(n);
  for (int i = 0; i < n; ++i) {
    after[i].resize(n);
    for (int j = 0; j < n; ++j) fin >> after[i][j];
  }
  int ans = 0;
  if (equal(rotate(before))) ans = 1;
  else if (equal(rotate(rotate(before)))) ans = 2;
  else if (equal(rotate(rotate(rotate(before))))) ans = 3;
  else if (equal(reflect(before))) ans = 4;
  else if (equal(rotate(reflect(before))) || equal(rotate(rotate(reflect(before)))) || equal(rotate(rotate(rotate(reflect(before)))))) ans = 5;
  else if (equal(before)) ans = 6;
  else ans = 7;
  fout << ans << '\n';
  return 0;
}
