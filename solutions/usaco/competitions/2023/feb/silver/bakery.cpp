// USACO Problem Link: http://usaco.org/index.php?page=viewproblem2&cpid=1302

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
struct Cow {ll c, m, t;};
 
bool correct(ll mo, ll tc, ll tm, vector<Cow> v) {
    int size = v.size();
    ll c = tc, m = tm, ans = mo;
    vector<pair<ll, ll>> v2(size);
    if (ans >= m - 1) {
        m = 1;
        ans -= tm - 1;
    } else {
        m -= ans;
        ans = 0;
    }
    if (ans >= c - 1) {
        c = 1;
        ans = 0;
    } else {
        c -= ans;
        ans = 0;
    }
    for (int i = 0; i < size; ++i) {
        if (v[i].c * c + v[i].m * m <= v[i].t) {
            v2[i] = make_pair(c, m);
        } else if (v[i].c <= v[i].m) {
            return false;
        } else {
            ll d = v[i].c - v[i].m, nt = (v[i].c * c + v[i].m * m) - v[i].t, nc;
            if (nt % d == 0) {
                nc = nt / d;
            } else {
                nc = nt / d + 1;
            }
            if (c - 1 > tm - m && nc > tm - m) {
                return false;
            }
            else if (tm - m >= c - 1 && nc > c - 1) {
                return false;
            }
            v2[i] = make_pair(c - nc, m + nc);
        }
    }
    for (int i = 0; i < size; ++i) {
        bool check = true;
        for (Cow &j: v) {
            if (j.c * v2[i].first + j.m * v2[i].second > j.t) {
                check = false;
                break;
            }
        }
        if (check) {
            return true;
        }
    }
    return false;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, tc, tm;
        cin >> n >> tc >> tm;
        vector<Cow> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i].c >> v[i].m >> v[i].t;
        }
        ll mn = 0, mx = 2e9 - 1;
        while (mn < mx) {
            ll md = mn + (mx - mn) / 2;
            if (correct(md, tc, tm, v)) {
                mx = md;
            }
            else {
                mn = md + 1;
            }
        }
        cout << mn << endl;
    }
    return 0;
}
