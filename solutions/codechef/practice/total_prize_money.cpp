// CodeChef Problem Link: https://www.codechef.com/problems/PRIZEPOOL

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        cout << (x * 10) + (y * 90) << endl;
    }
	return 0;
}
