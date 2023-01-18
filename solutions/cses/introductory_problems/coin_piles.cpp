// CSES Problem Link: https://cses.fi/problemset/task/1754/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long int t;
	cin >> t;
	while (t--) {
		long long int a, b;
		cin >> a >> b;
		if (((a + b) % 3 == 0) && (min(a, b) * 2 >= max(a, b))) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}
