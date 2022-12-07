// CodeChef Problem Link: https://www.codechef.com/START68D/problems/MAKEMONEY

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n, x, c;
	    cin >> n >> x >> c;
	    vector<int> v(n);
	    for (int i = 0; i < n; ++i) {
	        cin >> v[i];
	    }
	    
	    int ans = 0;
	    for (int i = 0; i < n; i++) {
	        ans += max(v[i], x - c);
	    }
	    
	    cout << ans << endl;
	}
	return 0;
}
