// CodeChef Problem Link: https://www.codechef.com/problems/ELECTIONS

/*
Details
-------
STRATEGY: conditionals
I/O: terminal/stdin
APPROACH: There are 101 citizens, therefore, for a 50% majority, (int) 101 / 2 = 51 citizens need to vote for a party. Implement conditions to verify the results.
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int xa, xb, xc;
	    cin >> xa >> xb >> xc;
	    if (xa >= 51) {
	        cout << 'A' << endl;
	    } else if (xb >= 51) {
	        cout << 'B' << endl;
	    } else if (xc >= 51) {
	        cout << 'C' << endl;
	    } else {
	        cout << "NOTA" << endl;
	    }
	}
	return 0;
}
