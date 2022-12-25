// CodeChef Problem Link: https://www.codechef.com/DEC221D/problems/DIVISIBLEBY

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    vector<int> v(n);
	    for (int i = 0; i < n; ++i) {
	        cin >> v[i];
	    }
	    int gcd = v[0];
	    for (int i = 0; i < n; ++i) {
	        gcd = __gcd(gcd, v[i]);
	    }
	    for (auto &i: v) {
	        cout << (i / gcd) << " ";
	    }
	    cout << endl;
	}
	return 0;
}
