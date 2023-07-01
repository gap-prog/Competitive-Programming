// AtCoder Problem Link: https://atcoder.jp/contests/abc297/tasks/abc297_b

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int locK = -1, locR1 = -1, locR2 = -1, locB1 = -1, locB2 = -1;
    for (int i = 0; i < (int) s.size(); ++i) {
        if (s[i] == 'K') locK = i;
        if (s[i] == 'R') {
            if (locR1 == -1) locR1 = i;
            else locR2 = i;
        }
        if (s[i] == 'B') {
            if (locB1 == -1) locB1 = i;
            else locB2 = i;
        }
    }
    int ans = 1;
    ans &= (locB1 % 2 != locB2 % 2);
    ans &= (locR1 < locK && locK < locR2);
    cout << (ans ? "Yes" : "No") << '\n';
    return 0;
}
