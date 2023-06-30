// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=593

#include <bits/stdc++.h>
using namespace std;

int curr = 0, x = 1000, y = 1000, ans = INT_MAX;
vector<vector<int>> v(2000, vector<int>(2000, -1));

int main() {
    ifstream fin("mowing.in");
    ofstream fout("mowing.out");
    v[x][y] = 0;
    int n; fin >> n;
    for (int i = 0; i < n; ++i) {
        char d; fin >> d;
        int s; fin >> s;
        for (int j = 1; j <= s; ++j) {
            if (d == 'N') x--;
            else if (d == 'S') x++;
            else if (d == 'E') y++;
            else if (d == 'W') y--;
            curr++;
            if (v[x][y] >= 0) ans = min(ans, curr - v[x][y]);
            v[x][y] = curr;
        }
    }
    fout << (ans == INT_MAX ? -1 : ans) << '\n';
    return 0;
}
