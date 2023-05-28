// CodeForces Problem Link: https://codeforces.com/contest/1811/problem/C

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n - 1), a;
        for (int &i: b) cin >> i;
        a.push_back(b[0]);
        for (int i = 0; i < n - 2; ++i) a.push_back(min(b[i], b[i + 1]));
        a.push_back(b[n - 2]);
        for (int &i: a) cout << i << ' ';
        cout << '\n';
    }
    return 0;
}