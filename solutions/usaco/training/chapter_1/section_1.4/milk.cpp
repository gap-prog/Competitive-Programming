// USACO Training Pages Problem Link: https://train.usaco.org/usacoprob2?a=o5GKFbuu1XA&S=barn1

#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("milk.in");
    ofstream fout("milk.out");
    int n, m;
    fin >> n >> m;
    vector<pair<int, int>> v(m);
    for (pair<int, int> &i: v) fin >> i.first >> i.second;
    sort(begin(v), end(v));
    int ans = 0, i;
    for (i = 0; i < m && n > 0; ++i) {
        n -= v[i].second;
        ans += v[i].first * v[i].second;
    }
    if (n != 0) ans += n * v[i - 1].first;
    fout << ans << '\n';
    return 0;
}