// Open Kattis Problem Link: https://open.kattis.com/problems/detaileddifferences

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        cout << s1 << '\n' << s2 << endl;
        for (int i = 0; i < s1.length(); ++i) {
            if (s1[i] == s2[i]) {
                cout << '.';
            } else {
                cout << '*';
            }
        }
        cout << endl;
    }
    return 0;
}
