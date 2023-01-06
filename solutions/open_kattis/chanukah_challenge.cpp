// Open Kattis Problem Link: https://open.kattis.com/problems/chanukah

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k, n;
        cin >> k >> n;
        int total = 0;
        for (int i = 0; i < n; ++i) {
            total += i + 2;
        }
        cout << k << " " << total << endl;
    }
}
