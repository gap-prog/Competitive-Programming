// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=940

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("factory.in", "r", stdin);
    freopen("factory.out", "w", stdout);
    int n;
    cin >> n;
    set<int> s1, s2;
    for (int i = 0; i < n; ++i) {
        int incoming, outgoing;
        cin >> incoming >> outgoing;
        s1.insert(incoming);
        s2.insert(outgoing);
    }
    vector<int> v;
    set_difference(s2.begin(), s2.end(), s1.begin(), s1.end(), back_inserter(v));
    if (v.size() > 1 || n == 1) {
        cout << -1 << endl;
    } else {
        cout << v[0] << endl;
    }
    return 0;
}
