// CodeChef Problem Link: https://www.codechef.com/DEC221D/problems/INVESTMENT

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int x, y;
	    cin >> x >> y;
	    if (x >= y * 2) {
	        cout << "YES" << endl;
	    } else {
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
