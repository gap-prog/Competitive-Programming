// CodeChef Problem Link: https://www.codechef.com/problems/COURSEREG

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, m, k; cin >> n >> m >> k;
        cout << (m - k >= n ? "YES" : "NO") << '\n';
    }
	return 0;
}
