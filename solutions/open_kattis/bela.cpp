// Open Kattis Problem Link: https://open.kattis.com/problems/bela

#include <bits/stdc++.h>
using namespace std;

int gv(char c) {
    if (c == 'A') return 11;
    else if (c == 'K') return 4;
    else if (c == 'Q') return 3;
    else if (c == 'J') return 2;
    else if (c == 'T') return 10;
    return 0;
}

int gvt(char c) {
    if (c == 'A') return 11;
    else if (c == 'K') return 4;
    else if (c == 'Q') return 3;
    else if (c == 'J') return 20;
    else if (c == 'T') return 10;
    else if (c == '9') return 14;
    return 0;
}

int main() {
    int n, sum = 0; char b;
    cin >> n >> b;
    char num, s;
    while (cin >> num && cin >> s) {
        if (s == b) sum += gvt(num);
        else sum += gv(num);
    }
    cout << sum << endl;
}
