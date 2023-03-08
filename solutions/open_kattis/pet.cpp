// Open Kattis Problem Link: https://open.kattis.com/problems/pet

#include <bits/stdc++.h>
using namespace std;

int main() {
    int max_idx, max_g = -1;
    for (int i = 0; i < 5; ++i) {
        int g1, g2, g3, g4, sum = 0;
        cin >> g1 >> g2 >> g3 >> g4;
        sum = g1 + g2 + g3 + g4;
        if (sum > max_g) {
            max_g = sum;
            max_idx = i + 1;
        }
    }
    cout << max_idx << ' ' << max_g << endl;
    return 0;
}
