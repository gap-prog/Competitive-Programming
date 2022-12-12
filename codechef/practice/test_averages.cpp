// CodeChef Problem Link: https://www.codechef.com/problems/TESTAVG

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    if ((a + b) / 2 < 35 || (a + c) / 2 < 35 || (b + c) / 2 < 35) {
	        cout << "Fail" << endl;
	    } else {
	        cout << "Pass" << endl;
	    }
	}
	return 0;
}
