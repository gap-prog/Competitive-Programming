// CodeChef Problem Link: https://www.codechef.com/problems/BURGERS

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int p, b;
	    cin >> p >> b;
	    cout << min(p, b) << endl;
	}
	return 0;
}
