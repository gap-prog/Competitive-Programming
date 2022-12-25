// CodeChef Problem Link: https://www.codechef.com/problems/MONOPOLY

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
	    int r1, r2, r3;
	    cin >> r1 >> r2 >> r3;
	    if (r1 > r2 + r3 || r2 > r1 + r3 || r3 > r1 + r2) {
	        cout << "YES" << endl;
	    } else {
	        cout << "NO" << endl;
	    }
	}
}
