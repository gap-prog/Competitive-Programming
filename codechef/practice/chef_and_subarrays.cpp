// CodeChef Problem Link: https://www.codechef.com/problems/ADJSUMPAR

/*
Details
-------
STRATEGY: simulation
I/O: terminal/stdin
APPROACH: simulate the sum and product of each subarray and check if they are the same
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        int count = n;
        for (int i = 0; i < n; ++i) {
            int sum = v[i], prod = v[i];
            for (int j = i + 1; j < n; ++j) {
                sum += v[j];
                prod *= v[j];
                if (sum == prod) {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
