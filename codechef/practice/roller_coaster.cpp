// CodeChef Problem Link: https://www.codechef.com/problems/MINHEIGHT

/*
Details
-------
STRATEGY: conditionals
I/O: terminal/stdin
APPROACH: check if the input values pass a condition
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int x, h;
	    cin >> x >> h;
	    cout << ((x >= h) ? "YES" : "NO") << endl;
	}
	return 0;
}
