// CodeForces Problem Link: https://codeforces.com/contest/1832/problem/A

#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<char, int> p1, const pair<char, int> p2) {
    return p1.second < p2.second;
}

void solve() {
    string s; cin >> s;
    map<char, int> mp;
    for (char &i: s) mp[i]++;
    pair<char, int> mn = *min_element(mp.begin(), mp.end(), cmp);
    if ((mp.size() == 2 && mn.second > 1) || (mp.size() > 2)) cout << "YES" << '\n';
    else cout << "NO" << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
