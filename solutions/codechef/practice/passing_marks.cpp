// CodeChef Problem Link: https://www.codechef.com/problems/CUTOFF

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n, x;
	    cin >> n >> x;
	    vector<int> v(n);
	    for (auto &i: v) cin >> i;
	    sort(v.rbegin(), v.rend());
	    cout << (v[x - 1] - 1) << endl;
	}
	return 0;
}
