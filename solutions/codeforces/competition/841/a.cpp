#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long n, prod = 1;
		cin >> n;
		vector<long long> v(n);
		for (int i = 0; i < n; ++i) {
			cin >> v[i];
			prod *= v[i];
		}
		prod += (n - 1);
		cout << (prod * 2022) << endl;
	}
}
