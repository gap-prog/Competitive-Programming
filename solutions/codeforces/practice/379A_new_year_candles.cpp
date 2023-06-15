// CodeForces Problem Link: https://codeforces.com/contest/379/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    int curr, ans = a;
    while (a >= b) {
        ans += a / b;
        a = a / b + a % b;
    }
    cout << ans << '\n';
    return 0;
}
