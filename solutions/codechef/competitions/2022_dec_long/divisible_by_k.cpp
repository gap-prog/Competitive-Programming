// CodeChef Problem Link: https://www.codechef.com/DEC221D/problems/DIVBYK

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n, k;
	    cin >> n >> k;
	    vector<long long> v(n);
	    for (int i = 0; i < n; ++i) {
	        cin >> v[i];
	    }
	    long long prod = 1;
	    for (auto &i: v) {
	        if (i % k == 0) {
	            prod = 0;
	            break;
	        } else {
	            prod = (prod * i) % k;
	        }
	    }
	    cout << ((prod == 0) ? "YES" : "NO") << endl;
	}
	return 0;
}
