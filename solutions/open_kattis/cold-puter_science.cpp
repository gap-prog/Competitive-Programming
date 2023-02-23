// Open Kattis Problem Link: https://open.kattis.com/contests/de4eaf/problems/cold

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        if (num < 0) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
