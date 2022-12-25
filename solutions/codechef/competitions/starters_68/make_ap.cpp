// CodeChef Problem Link: https://www.codechef.com/START68D/problems/MAKEAP

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int a, c;
	    cin >> a >> c;
	    if ((c - a) % 2 == 0) {
	        cout << (a + c) / 2 << endl;
	    } else {
	        cout << -1 << endl;
	    }
	}
	return 0;
}
