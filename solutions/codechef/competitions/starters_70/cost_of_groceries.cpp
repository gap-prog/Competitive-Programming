// CodeChef Problem Link: https://www.codechef.com/START70C/problems/KITCHENCOST

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> v1(n), v2(n);
        for (int i = 0; i < n; ++i) {
            cin >> v1[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> v2[i];
        }
        long long int c = 0;
        for (int i = 0; i < n; ++i) {
            if (v1[i] >= x) {
                c += v2[i];
            }
        }
        cout << c << endl;
    }
    return 0;
}
