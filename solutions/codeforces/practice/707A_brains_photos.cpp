// CodeForces Problem Link: https://codeforces.com/problemset/problem/707/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    bool flag = false;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            char c; cin >> c;
            if (c == 'C' || c == 'M' || c == 'Y') {
                flag = true;
                break;
            }
        }
    }
    cout << (flag ? "#Color" : "#Black&White") << '\n';
    return 0;
}
