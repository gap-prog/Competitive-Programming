// Open Kattis Problem Link: https://open.kattis.com/problems/tarifa

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, n;
    cin >> x >> n;
    int total = x;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        total -= num;
        total += x;
    }
    cout << total;
}
