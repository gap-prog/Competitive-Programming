// CodeChef Problem Link: https://www.codechef.com/problems/DISTINCTSEQ

#include <bits/stdc++.h>
#define sz(x) ((int) x.size())
using namespace std;

void solve(int &n, string &s) {
    int z = 0;
    for (int i = 0; i < (2 * n); i++) {
        if (s[i] == '0') {
            z++;
        }
    }
    if (z == (2 * n) || !z) {
        cout << -1 << endl;
    }
    else {
        set<int> ind;
        for (int i = 0; i < (2 * n); i++) {
            if (s[i] == '0') {
                ind.insert(i + 1);
                z--;
               
                if (sz(ind) == n || !z) {
                    break;
                }
            }
        }
        int i = 1;
        while (sz(ind) < n) {
            ind.insert(i + 1);
            i++;
        }
       
        for (const int &id: ind) {
            cout << id << " ";
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string S;
        cin >> S;
        solve(n, S);
    }
    return 0;
}
