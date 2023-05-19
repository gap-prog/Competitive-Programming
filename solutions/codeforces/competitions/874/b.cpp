// CodeForces Problem Link: https://codeforces.com/contest/1833/problem/B


#include <bits/stdc++.h>
using namespace std;
 
bool func(pair<int, int> &p1, pair<int, int> &p2) {
	return p1.second < p2.second;
}
 
int main() {
    int t;
    cin >> t;
	while (t--) {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> a;
        for (int i = 0; i < n; ++i) {
            int num;
            cin >> num;
            a.push_back({num, i});
        }
        vector<int> b(n);
        for (int &i: b) cin >> i;
        sort(begin(a), end(a));
        sort(begin(b), end(b));
        for (int i = 0; i < n; ++i) a[i].first = b[i];
        sort(begin(a), end(a), func);
        for (pair<int, int> &i: a) cout << i.first << ' ';
		cout << '\n';
    }
	return 0;
}
