// CodeForces Problem Link: https://codeforces.com/contest/1831/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> A(n), B(n);
        for (int &i: A) cin >> i;
        for (int &i: B) cin >> i;
        unordered_map<int, int> a, b;
        int ct = 1;
        for (int i = 1; i <= n; ++i) {
            if (i == n) {
                a[A[i - 1]] = max(ct, a[A[i - 1]]);
                break;
            }
            if (A[i] == A[i - 1]) ct++;
            else {
                a[A[i - 1]] = max(ct, a[A[i - 1]]);
                ct = 1;
            }
        }
        ct = 1;
        for (int i = 1; i <= n; ++i) {
            if (i == n) {
                b[B[i - 1]] = max(ct, b[B[i - 1]]);
                break;
            }
            if (B[i] == B[i - 1]) ct++;
            else {
                b[B[i - 1]] = max(ct, b[B[i - 1]]);
                ct = 1;
            }
        }
        int ans = 0;
        for (int &i: A) ans = max(ans, a[i] + b[i]);
        for (int &i: B) ans = max(ans, a[i] + b[i]);
        cout << ans << '\n';
    }
    return 0;
}