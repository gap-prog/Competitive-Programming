// CodeChef Problem Link: https://www.codechef.com/LP0TO101/problems/FLOW013

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--) {
        int a1, a2, a3;
        cin >> a1 >> a2 >> a3;
        if (a1 + a2 + a3 == 180) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
	return 0;
}
