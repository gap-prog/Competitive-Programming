// CodeChef Problem Link: https://www.codechef.com/problems/MAGICJAR

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
	    cout << (accumulate(v.begin(), v.end(), 1L - n)) << endl;
	}
	return 0;
}
