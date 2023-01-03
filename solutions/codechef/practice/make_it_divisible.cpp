// CodeChef Problem Link: https://www.codechef.com/LP2TO301/problems/MAKEDIV3

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define spc " "
#define nl '\n'
#define sz(x) ((int) x.size())

void solve() {
        int n;
        cin >> n;
        int arr[n] = {0};
        arr[0] = 3;
        arr[n - 1] = 3;
        for (int i = 0; i < n; ++i) {
                cout << arr[i];
        }
        cout << endl;
}

int main() {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        int t;
        cin >> t;
        while (t--) {
                solve();
        }
}
