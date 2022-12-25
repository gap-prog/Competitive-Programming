// CodeChef Problem Link: https://www.codechef.com/problems/MINNOO

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    if (n % 2 == 0) {
	        cout << n / 2 << endl;
	    } else {
	        cout << (n - 1) / 2 << endl;
	    }
	}
	return 0;
}
