// CodeChef Problem Link: https://www.codechef.com/problems/CHHAPPY

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
            v[i]--;
        }
        vector<pair<int, int>> vp;
        for (int i = 0; i < n; ++i) {
            int num1 = v[i];
            int num2 = v[v[i]];
            vp.push_back({num2, num1});
        }
        sort(vp.begin(), vp.end());
        bool check = false;
        for (int i = 1; i < n; ++i) {
            check |= vp[i].first == vp[i - 1].first && vp[i].second != vp[i - 1].second;
        }
        cout << ((check) ? "Truly Happy" : "Poor Chef") << endl;
    }
}
