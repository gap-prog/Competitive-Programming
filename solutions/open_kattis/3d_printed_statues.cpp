// Open Kattis Problem Link: https://open.kattis.com/problems/3dprinter

#include <bits/stdc++.h>
using namespace std;

int main() {
    double n;
    cin >> n;
    n = ceil(log2(n)) + 1;
    cout << n << endl;
}
