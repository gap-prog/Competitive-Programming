// Open Kattis Problem Link: https://open.kattis.com/users/4kvs4xs9

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << n << " is " << ((n % 2 == 0) ? "even" : "odd") << endl;
    }
    return 0;
}
