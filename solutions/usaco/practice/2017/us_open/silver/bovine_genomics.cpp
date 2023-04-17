// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=739

#include <bits/stdc++.h>
using namespace std;

int main() {
        freopen("cownomics.in", "r", stdin);
        freopen("cownomics.out", "w", stdout);
        int n, m, ans = 0;
        cin >> n >> m;
        vector<vector<int>> spotty(n, vector<int>(m));
        vector<vector<int>> plain(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
                string s;
                cin >> s;
                for (int j = 0; j < m; ++j) {
                        if (s[j] == 'A') spotty[i][j] = 0;
                        else if (s[j] == 'T') spotty[i][j] = 1;
                        else if (s[j] == 'C') spotty[i][j] = 2;
                        else spotty[i][j] = 3;
                }
        }
        for (int i = 0; i < n; ++i) {
                string s;
                cin >> s;
                for (int j = 0; j < m; ++j) {
                        if (s[j] == 'A') plain[i][j] = 0;
                        else if (s[j] == 'T') plain[i][j] = 1;
                        else if (s[j] == 'C') plain[i][j] = 2;
                        else plain[i][j] = 3;
                }
        }
        for (int i = 0; i < m - 2; ++i) {
                for (int j = i + 1; j < m - 1; ++j) {
                        for (int k = j + 1; k < m; ++k) {
                                vector<bool> spotted(64);
                                bool check = true;
                                for (int l = 0; l < n; ++l) {
                                        int ret = spotty[l][i] * 16 + spotty[l][j] * 4 + spotty[l][k];
                                        spotted[ret] = true;
                                }
                                for (int l = 0; l < n; ++l) {
                                        int ret = plain[l][i] * 16 + plain[l][j] * 4 + plain[l][k];
                                        if (spotted[ret]) {
                                                check = false;
                                                break;
                                        }
                                }
                                ans += check;
                        }
                }
        }
        cout << ans << endl;
        return 0;
}
