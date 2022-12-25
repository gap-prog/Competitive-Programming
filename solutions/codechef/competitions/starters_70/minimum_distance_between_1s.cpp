// CodeChef Problem Link: https://www.codechef.com/START70C/problems/MINDIST1

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int l, r;
        l = r = 0;
        while (s[l] != '1') {
            l++; r++;
        }
        int d = INT_MAX;
        while (l < n) {
            while (r < n) {
                if (r + 1 < n && s[r + 1] == '0') {
                    r++;
                } else {
                    r++;
                    break;
                }
            }
            if (r < n) {
                d = min(d, ((r - l) % 2) ? 1 : 2);
            }
            l = r;
        }
        cout << d << endl;
    }
    return 0;
}
