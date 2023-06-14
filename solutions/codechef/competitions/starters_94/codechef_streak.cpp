// CodeChef Problem Link: https://www.codechef.com/problems/CS2023_STK

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n), b(n);
    for (int &i: a) cin >> i;
    for (int &i: b) cin >> i;
    int om = 0, curr = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] > 0) curr++;
        else {
            om = max(om, curr);
            curr = 0;
        }
    }
    om = max(om, curr);
    curr = 0;
    int addy = 0;
    for (int i = 0; i < n; ++i) {
        if (b[i] > 0) curr++;
        else {
            addy = max(addy, curr);
            curr = 0;
        }
    }
    addy = max(addy, curr);
    if (om > addy) cout << "Om" << '\n';
    else if (addy > om) cout << "Addy" << '\n';
    else cout << "Draw" << '\n';
}

int main() {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}