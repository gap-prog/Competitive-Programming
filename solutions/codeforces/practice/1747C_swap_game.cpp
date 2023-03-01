// CodeForces Problem Link: 

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (ll &i: v) cin >> i;
        sort(v.begin() + 1, v.end());
        cout << (v[0] > v[1] ? "Alice" : "Bob") << endl;
    }
    return 0;
}
