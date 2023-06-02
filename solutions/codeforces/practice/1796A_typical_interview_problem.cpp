// CodeForces Problem Link: https://codeforces.com/contest/1796/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    string FB;
    int ct = 1;
    while (FB.size() < 17) {
        if (ct % 3 == 0) FB += "F";
        if (ct % 5 == 0) FB += "B";
        ct++;
    }
    int t;
    cin >> t;
    while (t--) {
        int k; cin >> k;
        string s; cin >> s;
        cout << (FB.find(s) != string::npos ? "YES" : "NO") << '\n';
    }
    return 0;
}