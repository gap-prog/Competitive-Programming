// CodeChef Problem Link: https://www.codechef.com/START70C/problems/PRIMEREVERSE

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string a, b;
        cin >> n >> a >> b;
        int n1, n2;
        n1 = n2 = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] == '0') {
                n1++;
            }
            if (b[i] == '0') {
                n2++;
            }
        }
        if (n1 == n2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
