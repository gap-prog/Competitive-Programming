// Open Kattis Problem Link: https://open.kattis.com/problems/parking2

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, mx = -1, mn = 100;
        cin >> n;
        while (n--) {
            int num;
            cin >> num;
            mx = max(mx, num);
            mn = min(mn, num);
        }
        cout << (mx - mn) * 2 << endl;
    }
}
