// CodeChef Problem Link: https://www.codechef.com/problems/CHEFDINE

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        map<int, int> m;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            m[a[i]] = INT_MAX;
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        if (m.size() < k) {
            cout << -1 << endl;
            continue;
        }
        for (int i = 0; i < n; ++i) {
            m[a[i]] = min(b[i], m[a[i]]);
        }
        vector<int> ans;
        for (auto &i: m) {
            ans.push_back(i.second);
        }
        sort(ans.begin(), ans.end());
        long long total = 0;
        for (int i = 0; i < k; ++i) {
            total += ans[i];
        }
        cout << total << endl;
    }
    return 0;
}
