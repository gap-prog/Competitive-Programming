// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=1011

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ifstream fin("triangles.in");
  ofstream fout("triangles.out");
  ll n; fin >> n;
  vector<pair<ll, ll>> v(n); for (pair<ll, ll> &i: v) fin >> i.first >> i.second;
  ll MAX = 0;
  for (pair<ll, ll> &i: v) {
    for (pair<ll, ll> &j: v) {
      for (pair<ll, ll> &k: v) {
        if (i.second == j.second && i.first == k.first) {
          ll area = abs((j.first - i.first) * (k.second - i.second));
          MAX = max(MAX, area);
        }
      }
    }
  }
  fout << MAX << '\n';
  return 0;
}
