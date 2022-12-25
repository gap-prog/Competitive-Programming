// CodeChef Problem Link: https://www.codechef.com/problems/JENGA

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n, x;
	    cin >> n >> x;
	    if (x % n == 0) {
	        cout << "YES" << endl;
	    } else {
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
