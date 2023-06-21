#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x; cin >> x;
    if (x <= 3) cout << "BRONZE" << '\n';
    else if (x > 3 && x <= 6) cout << "SILVER" << '\n';
    else cout << "GOLD" << '\n';
}

int main() {
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
