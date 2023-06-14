// CodeChef Problem Link: https://www.codechef.com/problems/CS2023_PON

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int n, b, ans = INT_MAX; cin >> n >> b;
        vector<int> a(n), v;
        for (int &i: a) cin >> i;
        for (int i = 0; i < n; ++i) if ((a[i] & b) == b) v.push_back(a[i]);
        for (int i = 0; i < v.size(); ++i) ans &= v[i];
        if (ans == b) cout << "YES" << "\n";
        else cout << "NO" << "\n"; 
    }
    return 0;
}