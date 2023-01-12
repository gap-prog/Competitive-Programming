// Open Kattis Problem Link: https://open.kattis.com/problems/grassseed

#include <bits/stdc++.h>
using namespace std;

int main() {
    double c, ct = 0;
    int l;
    cin >> c >> l;
    while (l--) {
        double wi, li;
        cin >> wi >> li;
        ct += wi * li * c;
    }
    printf("%.7f", ct);
}
