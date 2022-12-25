// CodeChef Problem Link: https://www.codechef.com/START68D/problems/EXPENSES

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n, x;
	    cin >> n >> x;
	    int savings = pow(2, x);
	    for (int i = 0; i < n; ++i) {
	        savings *= 0.5;
	    }
	    cout << savings << endl;
	}
	return 0;
}
