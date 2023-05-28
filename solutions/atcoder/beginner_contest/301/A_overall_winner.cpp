// AtCoder Problem Link: https://atcoder.jp/contests/abc301/tasks/abc301_a

#include <bits/stdc++.h>
using namespace std;

int main() {
    double n;
    string s;
    cin >> n >> s;
    int t = 0, a = 0;
    string winner;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'T') t++;
        else a++;
        if (t == ceil(n / 2)) {
            winner = "T";
            break;
        }
        else if (a == ceil(n / 2)) {
            winner = "A";
            break;
        }
    }
    cout << winner << '\n';
    return 0;
}