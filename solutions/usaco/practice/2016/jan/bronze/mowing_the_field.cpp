// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=593

#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cin >> n;
        vector<vector<int>> v(2001, vector<int>(2001));
        for (int i = 0; i < v.size(); ++i) {
                for (int j = 0; j < v[i].size(); ++j) {
                        v[i][j] = -1;
                }
        }
        int curr_x = 1000, curr_y = 1000, curr_t = 0, ans = 1001;
        v[curr_x][curr_y] = 0;
        for (int i = 0; i < n; ++i) {
                char dir;
                int dir_x = 0, dir_y = 0, steps;
                cin >> dir >> steps;
                if (dir == 'N') {
                        dir_x = -1;
                } else if (dir == 'S') {
                        dir_x = 1;
                } else if (dir == 'W') {
                        dir_y = -1;
                } else {
                        dir_y = 1;
                }
                for (int j = 1; j <= steps; ++j) {
                        curr_x += dir_x;
                        curr_y += dir_y;
                        curr_t++;
                        if (v[curr_x][curr_y] >= 0 && curr_t - v[curr_x][curr_y] < ans) {
                                ans = curr_t - v[curr_x][curr_y];
                        }
                        v[curr_x][curr_y] = curr_t;
                }
        }
        cout << ((ans == 1001) ? -1 : ans) << endl;
        return 0;
}
