// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=1012

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("breedflip.in", "r", stdin);
    freopen("breedflip.out", "w", stdout);
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    int ans = 0;
    bool wrong = false;
    for (int i = 0; i < n; ++i) {
        if (s1[i] != s2[i]) {
            if (!wrong) {
                wrong = true;
                ans++;
            }
        } else {
            wrong = false;
        }
    }
    cout << ans << endl;
    return 0;
}
