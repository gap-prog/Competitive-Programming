// CodeChef Problem Link: https://www.codechef.com/problems/BIN_BAT

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int time;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        int r = 0;
        while (pow(2, r) < n) {
            r++;
        }
        cout << ((r * a) + (r - 1) * b) << endl;
    }
	return 0;
}
