// Open Kattis Problem Link: https://open.kattis.com/problems/judgingmoose

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    if (n1 == 0 && n2 == 0) {
        cout << "Not a moose" << endl;
    } else if (n1 == n2) {
        cout << "Even" << ' ' << n1 + n2 << endl;
    } else {
        cout << "Odd" << ' ' << ((n1 > n2) ? n1 * 2 : n2 * 2) << endl;
    }
    return 0;
}
