// CodeChef Problem Link: https://www.codechef.com/LP2TO301/problems/ALTER

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define spc " "
#define nl '\n'
#define sz(x) ((int) x.size())

void solve() {
        int a, b, p, q;
        cin >> a >> b >> p >> q;
        cout << ((p % a == 0 && q % b == 0) && abs(p / a - q / b) <= 1 ? "YES" : "NO") << endl;
}

int main() {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        int t;
        cin >> t;
        while (t--) {
                solve();
        }
        return 0;
}
