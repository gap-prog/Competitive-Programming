// CodeChef Problem Link: https://www.codechef.com/LP2TO301/problems/NFS

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define spc " "
#define nl '\n'
#define sz(x) ((int) x.size())

void solve() {
        float U, V, A, S;
        cin >> U >> V >> A >> S;
        float v = sqrt((U * U) - (2 * A * S));
        cout << ((V < v) ? "NO" : "YES") << endl;
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
