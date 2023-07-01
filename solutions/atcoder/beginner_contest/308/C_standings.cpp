// AtCoder Problem Link: https://atcoder.jp/contests/abc308/tasks/abc308_c

#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool comp(pair<int, pair<ll, ll>> &p1, pair<int, pair<ll, ll>> &p2) {
    ll res1 = p1.second.first * (p2.second.first + p2.second.second);
    ll res2 = p2.second.first * (p1.second.first + p1.second.second);
    if (res1 == res2) { return p1.first < p2.first; }
    return res1 > res2;
}

int main() {
    ll n; cin >> n;
    vector<pair<int, pair<ll, ll>>> v;
    for (int i = 0; i < n; ++i) {
        ll a, b; cin >> a >> b;
        v.push_back({i + 1, {a, b}});
    }
    sort(v.begin(), v.end(), comp);
    for (pair<int, pair<ll, ll>> &i: v) cout << i.first << ' ';
    cout << '\n';
    return 0;
}
