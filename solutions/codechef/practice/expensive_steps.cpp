// CodeChef Problem Link: https://www.codechef.com/problems/EXPSTP

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n, x1, y1, x2, y2;
	    cin >> n >> x1 >> y1 >> x2 >> y2;
	    int grid = abs(x2 - x1) + abs(y2 - y1);
	    int out = min({x1 - 1, n - x1, y1 - 1, n - y1}) + min({x2 - 1, n - x2, y2 - 1, n - y2}) + 2;
	    cout << min(grid, out) << endl;
	}
	return 0;
}
