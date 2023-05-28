// AtCoder Problem Link: https://atcoder.jp/contests/abc303/tasks/abc303_a

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == t[i]) ans++;
        else if ((s[i] == '1' && t[i] == 'l') || (s[i] == 'l' && t[i] == '1')) ans++;
        else if ((s[i] == '0' && t[i] == 'o') || (s[i] == 'o' && t[i] == '0')) ans++;
    }
    cout << ((ans == n) ? "Yes" : "No") << '\n';
    return 0;
}