// CodeChef Problem Link: https://www.codechef.com/DEC221D/problems/REACHFAST

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int x, y, k;
	    cin >> x >> y >> k;
	    if (x == y) {
	        cout << 0 << endl;
	    } else {
	        int dist = abs(y - x);
	        if (dist <= k) {
	            cout << 1 << endl;
	        } else if (dist % k == 0) {
	            cout << dist / k << endl;
	        } else {
	            cout << (int) dist / k + 1 << endl;
	        }
	    }
	}
	return 0;
}
