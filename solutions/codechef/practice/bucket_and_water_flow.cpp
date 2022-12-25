// CodeChef Problem Link: https://www.codechef.com/problems/WATERFLOW

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int w, x, y, z;
	    cin >> w >> x >> y >> z;
	    if (w + y * z < x) {
	        cout << "unfilled" << endl;
	    } else if (w + y * z == x) {
	        cout << "filled" << endl;
	    } else {
	        cout << "overflow" << endl;
	    }
	}
	return 0;
}
