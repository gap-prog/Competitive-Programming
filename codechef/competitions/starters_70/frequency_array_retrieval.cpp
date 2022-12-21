// CodeChef Problem Link: https://www.codechef.com/START70C/problems/FREQARRRET

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int &i: v) {
            cin >> i;
        }
        map<int, int> m;
        for (int &i: v) {
            m[i]++;
        }
        bool check = 1;
        for (const pair<int, int> &i: m) {
            if (i.second % i.first != 0) {
                check = 0;
                break;
            }
        }
        if (!check) {
            cout << -1 << endl;
        }
        else {
            int sz = 1;
            map<int, pair<int, int>> m2;
            vector<int> v2(n);
            for (int i = 0; i < n; i++) {
                if(m2.count(v[i])) {
                    if (m2[v[i]].second < v[i]) {
                        v2[i] = m2[v[i]].first;
                        m2[v[i]].second++;
                    }
                    else {
                        m2[v[i]] = {sz, 1};
                        v2[i] = sz;
                        sz++;
                    }
                }
                else {
                    m2[v[i]] = {sz, 1};
                    v2[i] = sz;
                    sz++;
                }
            }
            for (int &i: v2) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
	return 0;
}
