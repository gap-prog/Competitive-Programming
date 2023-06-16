// CodeForces Problem Link: https://codeforces.com/problemset/problem/1030/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    bool flag = true;
    for (int i = 0; i < n; ++i) {
        int num; cin >> num;
        if (num == 1) {
            flag = false;
            break;
        }
    }
    cout << (flag ? "EASY" : "HARD") << '\n';
    return 0;
}
