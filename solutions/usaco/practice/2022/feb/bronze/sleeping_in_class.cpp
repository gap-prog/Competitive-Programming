// USACO Problem Link: http://usaco.org/index.php?page=viewproblem2&cpid=1203

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        int sum = 0;
        for (auto &i: v) {
            cin >> i;
            sum += i;
        }
        for (int i = n; i >= 1; --i) {
            if (sum % i == 0) {
                int t_sum = sum / i, cur_sum = 0;
                bool check = true;
                for (int i = 0; i < n; ++i) {
                    cur_sum += v[i];
                    if (cur_sum > t_sum) {
                        check = false;
                        break;
                    }
                    if (cur_sum == t_sum) {
                        cur_sum = 0;
                    }
                }
                if (check) {
                    cout << n - i << endl;
                    break;
                }
            }
        }
    }
    return 0;
}