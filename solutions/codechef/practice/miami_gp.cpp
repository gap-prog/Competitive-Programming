// CodeChef Problem Link: https://www.codechef.com/problems/F1RULE

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
	    int x, y;
	    cin >> x >> y;
	    if (y > x * 1.07) {
	        cout << "NO" << endl;
	    } else {
	        cout << "YES" << endl;
	    }
	}
	return 0;
}
