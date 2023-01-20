#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> v;
		set<int> s;
		for (int i = 0; i < n; ++i) {
			int num;
			cin >> num;
			v.push_back(num);
			s.insert(num);
		}
		if (v.size() == s.size()) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}

