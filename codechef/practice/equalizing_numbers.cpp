// CodeChef Problem Link: https://www.codechef.com/problems/EQLZING

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    if (abs(a - b) % 2 != 0) {
	        cout << "No" << endl;
	    } else {
	        cout << "Yes" << endl;
	    }
	}
	return 0;
}
