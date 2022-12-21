// CodeChef Problem Link: https://www.codechef.com/problems/ADJSUMPAR

/*
Details
-------
STRATEGY: calculation, number theory
I/O: terminal/stdin
APPROACH: If the sum of all elements in the resultant array is even, then there is a initial array, otherwise, there isn't
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    int sum = 0;
	    for (int i = 0; i < n; ++i) {
	        int num;
	        cin >> num;
	        sum += num;
	    }
	    cout << ((sum % 2 == 0) ? "YES" : "NO") << endl;
	}
	return 0;
}
