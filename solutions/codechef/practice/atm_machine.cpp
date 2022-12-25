// CodeChef Problem Link: https://www.codechef.com/problems/ATM2

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n, k;
	    cin >> n >> k;
	    vector<int> v(n);
	    for (int i = 0; i < n; ++i) {
	        cin >> v[i];
	    }
	    for (auto &i: v) {
	        if (k - i >= 0) {
	            k -= i;
	            cout << 1;
	        } else {
	            cout << 0;
	        }
	    }
	    cout << endl;
	}
	return 0;
}
