// CodeForces Problem Link: 

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, negativeCount = 0;
        cin >> n;
        ll sum = 0;
        vector<ll> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            if (v[i] < 0) {
                negativeCount++;
                v[i] = -v[i];
            }
            sum += v[i];
        }
        sort(begin(v), end(v));
        if (negativeCount & 1) sum -= 2 * v[0];
        cout << sum << endl;
    }
    return 0;
}
