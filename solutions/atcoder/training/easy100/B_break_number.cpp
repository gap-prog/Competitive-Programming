// AtCoder Problem Link: https://atcoder.jp/contests/abc068/tasks/abc068_b

#include <bits/stdc++.h>
using namespace std;

vector<int> res = {1, 2, 4, 8, 16, 32, 64};

int main() {
    int n; cin >> n;
    int ans;
    for (int i = 6; i >= 0; --i) {
        if (res[i] <= n) {
            ans = res[i];
            break;
        }
    }
    cout << ans << '\n';
    return 0;
}
