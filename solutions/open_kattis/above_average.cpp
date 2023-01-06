// Open Kattis Problem Link: https://open.kattis.com/contests/nxmyxh/problems/aboveaverage

/*
Details
-------
STRATEGY: procedure
I/O: terminal/stdin
APPROACH: follow the procedure for calculating the average and finding the percent above a certain point
*/

#include <bits/stdc++.h>
#include <numeric>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<double> v(n);
    for (double &i: v) {
      cin >> i;
    }
    double total = accumulate(v.begin(), v.end(), (double) 0);
    double avg = total / n;
    double ct = 0;
    for (double &i: v) {
      ct += ((i > avg) ? 1 : 0);
    }
    double ans = ct / N * 100;
    printf("%.3f\%\n", ans);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
      solve();
    }
    return 0;
}
