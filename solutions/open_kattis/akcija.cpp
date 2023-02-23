// Open Kattis Problem Link: https://open.kattis.com/contests/de4eaf/problems/akcija

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &i : v) cin >> i;
    sort(rbegin(v), rend(v));
    for (int i = 2; i < N; i += 3) {
        v[i] = 0;
    }
    long long int ans = 0;
    for (int &i : v) ans += i;
    cout << ans << "\n";
    return 0;
}
