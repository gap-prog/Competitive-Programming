#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int rating; cin >> rating;
		cout << "Division ";
		if (rating <= 1399) cout << 4 << '\n';
		else if (rating >= 1400 && rating <= 1599) cout << 3 << '\n';
		else if (rating >= 1600 && rating <= 1899) cout << 2 << '\n';
		else cout << 1 << '\n';
	}
	return 0;
}
