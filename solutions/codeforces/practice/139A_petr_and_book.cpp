// CodeForces Problem Link: https://codeforces.com/problemset/problem/139/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(7); for (int &i: v) cin >> i;
    int total = 0, days;
    for (days = 0; total < n; ++days) {
        total += v[days];
        if (days == 6 & total < n) days = -1;
    }
    cout << days << '\n';
    return 0;
}