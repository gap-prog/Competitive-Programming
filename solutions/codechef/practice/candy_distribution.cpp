// CodeChef Problem Link: https://www.codechef.com/problems/CANDYDIST

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n, m;
	    cin >> n >> m;
	    int d = n / m;
	    if (n % m == 0 && d % 2 == 0) {
	        cout << "Yes" << endl;
	    } else {
	        cout << "No" << endl;
	    }
	}
	return 0;
}
