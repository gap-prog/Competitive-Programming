// USACO Problem Link: http://usaco.org/index.php?page=viewproblem2&cpid=892

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("sleepy.in", "r", stdin);
    freopen("sleepy.out", "w", stdout);
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i: v) {
        cin >> i;
    }
    int ans = n - 1;
    for (int i = n - 2; i >= 0; --i) {
        if (v[i] < v[i + 1]) {
            ans = i;
        } else {
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
