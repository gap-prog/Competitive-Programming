// CodeChef Problem Link: https://www.codechef.com/LP0TO101/problems/CHOPRT

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
	    int n1, n2;
	    cin >> n1 >> n2;
	    cout << ((n1 == n2) ? '=' : ((n1 > n2) ? '>' : '<')) << endl;
	}
	return 0;
}
