// CodeForces Problem Link: https://codeforces.com/contest/1833/problem/C

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
	while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &i: a) cin >> i;
        sort(begin(a), end(a));
        int j = INT_MAX, k = INT_MAX;
        bool check = false;
        for (int &i: a) {
            if (i % 2) check = true, j = min(i, j);
            else k = min(i, k);
		}
        if (!check || (k - j > 0)) cout << "YES" << '\n';
		else cout << "NO" << '\n';
    }
	return 0;
}
