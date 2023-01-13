// Open Kattis Problem Link: https://open.kattis.com/problems/dicecup

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(1000);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            v[i + j]++;
        }
    }
    int mx = 0, x = 0;
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] > mx) {
            mx = v[i];
            x = i;
        }
    }
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] == mx) {
            cout << i << endl;
        }
    }
}
