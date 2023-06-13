// SPOJ Problem Link: https://www.spoj.com/problems/ACPC10A/

#include <bits/stdc++.h>
using namespace std;

int main() {
    while (true) {
        int a1, a2, a3; cin >> a1 >> a2 >> a3;
        if (a1 == 0 && a2 == 0 && a3 == 0) break;
        bool diff = ((a2 - a1) == (a3 - a2));
        bool ratio = ((a2 / a1) == (a3 / a2));
        if (diff) cout << "AP" << ' ' << a3 + (a3 - a2) << '\n';
        else cout << "GP" << ' ' << a3 * (a3 / a2) << '\n';
    }
    return 0;
}