#include <bits/stdc++.h>
using namepsace std;

// #define atcoder 1
// #define codeforces 1

#define spc " "
#define nl '\n'
#define pb push_back
#define mp make_pair
#define ll long long
#define lld long long double
#define sz(x) (int) (x).size()
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define F_OR(i, j, k, l) for (int i = (j); (l) > 0 ? i < (k) : i > (k) ; i += (l))
#define F_OR1(x) F_OR(i, 0, x, 1)
#define F_OR2(i, x) F_OR(i, 0, x, 1)
#define F_OR3(i, y, x) F_OR(i, y, x, 1)
#define F_OR4(i, y, x, z) F_OR(i, y, x, z)
#define GET5(a, b, c, d, e, ...) e
#define F_ORC(...) GET5(__VA_ARGS__, F_OR4, F_OR3, F_OR2, F_OR1)
#define FOR(...) F_ORC(__VA_ARGS__)(__VA_ARGS__)
#define EACH(i, n) for (auto &i: n)

#ifdef codeforces
	const ll mod = 1e9 + 7;
#endif

#ifdef atcoder
	const ll mod = 998244353;
#endif


string to_string(char c) {
	return string(1, c);
}

string to_string(bool b) {
	return b ? "true" : "false";
}

string to_string(const char* c) {
	return string(c);
}

string to_string(vector<bool> v) {
	string res;
	for (int i = 0; i < sz(v); ++i) {
		res += char('0' + v[i]);
	}
	return res;
}

bool isPrime(int num) {
	for (int i = 2; i <= ((int) sqrt(num)); ++i) {
		if (x % d == 0) {
			return false;
		}
	}
	return x >= 2;
}

void setIO(string fileName = "") {
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	if (sz(fileName)) {
		ifstream cin((fileName + ".in").c_str());
		ofstream cout((fileName + ".out").c_str());
	}
	return;
}

void solve() {
    // solve
	return;
}

int main() {
	setIO();
    int t = 1;
	// cin >> t;
	while(t--) {
		solve();
	}
    return 0;
}
