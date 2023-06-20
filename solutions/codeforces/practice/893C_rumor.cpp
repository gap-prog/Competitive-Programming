// CodeForces Problem Link: https://codeforces.com/problemset/problem/893/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll MAXN = 1e5 + 1;

vector<ll> c(MAXN);
vector<bool> visited(MAXN);
vector<ll> adj[MAXN];

ll dfs(ll node) {
  visited[node] = true;
  ll cost = c[node];
  for (ll &i: adj[node]) if (!visited[i]) cost = min(cost, dfs(i));
  return cost;
}

int main() {
  ll n, m; cin >> n >> m;
  for (int i = 1; i <= n; ++i) cin >> c[i];
  for (int i = 1; i <= m; ++i) {
    ll x, y; cin >> x >> y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }
  ll ans = 0;
  for (int i = 1; i <= n; ++i) if (!visited[i]) ans += dfs(i);
  cout << ans << '\n';
  return 0;
}
