// CodeChef Problem Link: https://www.codechef.com/problems/REMONE

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    vector<int> b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < (n - 1); ++i) {
        cin >> b[i];
    }
    if (b.size() == 1) {
        cout << (b[0] - a[0]) << endl;
        return;
    }
    sort(a.begin(), a.end(), greater<int>());
    sort(b.begin(), b.end(), greater<int>());
    map<int, int> m;
    for (int i = 0;  i < n; ++i) {
        m[b[i] - a[i]]++;
        m[b[i] - a[i + 1]]++;
    }
    for (auto &i: m) {
        if (i.first > 0 && i.second == (n - 1)) {
            cout << i.first << endl;
            return;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
