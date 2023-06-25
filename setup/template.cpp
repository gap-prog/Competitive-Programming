#include <bits/stdc++.h>
using namespace std;

// #define atcoder 1
// #define codeforces 1

#ifdef atcoder
    const ll MOD = 998244353
#endif

#ifdef codeforces
    const ll MOD = 1e9 + 7;
#endif

// #pragma GCC optimize("Ofast")
// #pragma GCC target("avx2")

#define spc " "
#define nl "\n"
#define pb push_back
#define mp make_pair
#define ll long long
#define lld long long double
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define F_OR(i, j, k, l) for (int i = (j); (l) > 0 ? i < (k) : i > (k); i += (l))
#define F_OR1(x) F_OR(i, 0, x, 1)
#define F_OR2(i, x) F_OR(i, 0, x, 1)
#define F_OR3(i, y, x) F_OR(i, y, x, 1)
#define F_OR4(i, y, x, z) F_OR(i, y, x, z)
#define GET5(a, b, c, d, e, ...) e
#define F_ORC(...) GET5(__VA_ARGS__, F_OR4, F_OR3, F_OR2, F_OR1)
#define FOR(...) F_ORC(__VA_ARGS__)(__VA_ARGS__)
#define EACH(i, n) for (auto &i: n)

template <class T> int sz(const T &container) { return (int)container.size(); }

string to_string(char c) { return string(1, c); }

string to_string(bool b) { return b ? "true" : "false"; }

string to_string(const char* c) { return string(c); }

string to_string(vector<bool> v) {
	string res;
	for (int i = 0; i < sz(v); ++i) res += char('0' + v[i]);
	return res;
}

template<size_t S> string to_string(bitset<S> b) {
    string res;
    FOR(S) res += char('0' + b[i]);
    return res;
}

template<class T> string to_string(T v) {
    bool f = 1;
    string res;
    EACH(x, v) {
        if(!f) res += spc;
        f = 0;
        res += to_string(x);
    }
    return res;
}

void setIO(string filename = "") {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    if (sz(filename)) {
        freopen((filename + ".in").c_str(), "r", stdin);
        freopen((filename + ".out").c_str(), "w", stdout);
    }
}

ll mod_inv(ll num, ll mod) { return num <= 1 ? num : mod - ( mod / num) * mod_inv(mod % num, mod) % mod; }

bool is_prime(int num) {
    for (int i = 2; i * i <= num; ++i) if (num % i == 0) return false;
    return num >= 2;
}

ll binpow(ll base, ll exp) {
    ll ret = 1;
    while (exp > 0) {
        if (exp & 1) ret *= base;
        base *= base;
        exp >>= 1;
    }
    return ret;
}

void solve() {
    // solve
}

int main() {
    setIO();
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}