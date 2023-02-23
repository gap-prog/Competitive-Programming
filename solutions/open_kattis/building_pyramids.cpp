// Open Kattis Problem Link: https://open.kattis.com/contests/de4eaf/problems/pyramids

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, tmp = 0, n1 = 1, n2 = 0;
    cin >> n;
    while (tmp < n) {
        tmp += n1 * n1;
        n1 += 2;
        n2 += 1;
    }
    if (tmp > n) {
        n2 -= 1;
    }
    cout << n2 << endl;
    return 0;
}
