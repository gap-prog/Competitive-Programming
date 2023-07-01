// AtCoder Problem Link: https://atcoder.jp/contests/abc139/tasks/abc139_b

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    int outlet = 1, ans = 0;
    while (outlet < b) {
        outlet--;
        outlet += a;
        ans++;
    }
    cout << ans << '\n';
    return 0;
}
