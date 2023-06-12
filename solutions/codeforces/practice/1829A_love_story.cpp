// CodeForces Problem Link: https://codeforces.com/problemset/problem/1829/A

#include <bits/stdc++.h>
using namespace std;

const string CF = "codeforces";

int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int ans = 0;
        for (int i = 0; i < 10; ++i) {
            if (s[i] != CF[i]) ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}