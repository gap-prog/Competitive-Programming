// AtCoder Problem Link: https://atcoder.jp/contests/abc301/tasks/abc301_b

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i: a) cin >> i;
    for (int i = 1; i < ((int) a.size()); ++i) {
        if (a[i - 1] + 1 < a[i]) a.insert(a.begin() + i, a[i - 1] + 1);
        if (a[i - 1] - 1 > a[i]) a.insert(a.begin() + i, a[i - 1] - 1);
    }
    for (int &i: a) cout  << i << ' ';
    cout << '\n';
    return 0;
}