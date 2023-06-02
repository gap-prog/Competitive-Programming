// CodeForces Problem Link: https://codeforces.com/contest/1796/problem/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string a, b;
    cin >> a >> b;
    if (a[0] == b[0]) {
        cout << "YES\n" << a[0] << '*' << '\n';
        return;
    }
    else if (a[a.length() - 1] == b[b.length() - 1]) {
        cout << "YES\n" << '*' << a[a.length() - 1] << '\n';
        return;
    }
    else {
        for (int i = 0; i < a.size() - 1; ++i) {
            for (int j = 0; j < b.size() - 1; ++j) {
                if (a[i] == b[j] && a[i + 1] == b[j + 1]) {
                    cout << "YES\n" << '*' << a[i] << a[i + 1] << '*' << '\n';
                    return;
                }
            }
        }
    }
    cout << "NO" << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}