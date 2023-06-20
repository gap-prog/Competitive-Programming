#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    deque<int> queue;
    int ans = 0;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; ++i) queue.push_back(a[i]);
    while (size(queue) > 1) {
        ans += queue.back() - queue.front();
        queue.pop_front();
        queue.pop_back();
    }
    cout << ans << '\n';
}

int main() {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}