// CodeChef Problem Link: https://www.codechef.com/problems/TIMELY

/*
Details
-------
STRATEGY: calculation
I/O: terminal/stdin
APPROACH: formula application + true/false checks
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int x;
	    cin >> x;
	    cout << ((x - 30 >= 0) ? "YES" : "NO") << endl;
	}
	return 0;
}
