// USACO Guide CodeForces Problem Link: https://codeforces.com/gym/102951/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> x(n), y(n);
    for (int &i: x) cin >> i;
    for (int &i: y) cin >> i;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int dist = ((x[j] - x[i]) * (x[j] - x[i])) + ((y[j] - y[i]) * (y[j] - y[i]));
            ans = max(ans, dist);
        }
    }
    cout << ans << '\n';
}