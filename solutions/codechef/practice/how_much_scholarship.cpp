// CodeChef Problem Link: https://www.codechef.com/problems/ZCOSCH

#include <iostream>
using namespace std;

int main() {
    int r;
    cin >> r;
    if (r <= 50) {
        cout << 100 << endl;
    } else if (r >= 51 && r <= 100) {
        cout << 50 << endl;
    } else {
        cout << 0 << endl;
    }
	return 0;
}
