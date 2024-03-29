// CodeChef Problem Link: 

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vt vector
#define pr pair
#define st set
#define ar array
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define spc " "
#define nl '\n'
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define sta(v) sort(all(v))
#define F_OR(i, j, k, l) for (int i = (j); (l) > 0 ? i < (k) : i > (k) ; i += (l))
#define F_OR1(x) F_OR(i, 0, x, 1)
#define F_OR2(i, x) F_OR(i, 0, x, 1)
#define F_OR3(i, y, x) F_OR(i, y, x, 1)
#define F_OR4(i, y, x, z) F_OR(i, y, x, z)
#define GET5(a, b, c, d, e, ...) e
#define F_ORC(...) GET5(__VA_ARGS__, F_OR4, F_OR3, F_OR2, F_OR1)
#define FOR(...) F_ORC(__VA_ARGS__)(__VA_ARGS__)
#define EACH(i, n) for (auto &i: n)

string to_string(char c) {
        return string(1, c);
}

string to_string(bool b) {
        return b ? "true" : "false";
}

string to_string(const char* c) {
        return string(c);
}

string to_string(vt<bool> v) {
        string res;
        for (int i = 0; i < sz(v); ++i) {
                res += char('0' + v[i]);
        }
        return res;
}

void solve() {
        int n, m;
        string s, t, f;
        cin >> n >> m >> s >> t;
        reverse(begin(t), end(t));
        f = s + t;
        int num_pairs = 0;
        FOR(i, n + m - 1) {
                if (f[i] == f[i + 1]) num_pairs++;
        }
        if ((num_pairs == 0) || (num_pairs == 1))
                cout << "YES" << endl;
        else
                cout << "NO" << endl;
        return;
}

int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int t;
        cin >> t;
        while (t--) {
                solve();
        }
        return 0;
}
