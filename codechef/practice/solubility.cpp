// CodeChef Problem Link: https://www.codechef.com/problems/SOLBLTY

/*
Details
-------
STRATEGY: calculation
I/O: terminal/stdin
APPROACH: use the formula derived from the problem to calculate the answer
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, a, b;
        cin >> x >> a >> b;
        cout << (a + (100 - x) * b) * 10 << endl;
    }
}
