// CodeChef Problem Link: https://www.codechef.com/problems/MINCARS

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n < 4) {
            cout << 1 << endl;
        } else if (n % 4 == 0) {
            cout << n / 4 << endl;
        } else {
            cout << (n / 4) + 1 << endl;
        }
    }
	return 0;
}
