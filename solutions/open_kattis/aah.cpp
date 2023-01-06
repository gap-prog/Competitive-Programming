// Open Kattis Problem Link: https://open.kattis.com/contests/nxmyxh/problems/aaah

/*
Details
-------
STRATEGY: conditionals
I/O: terminal/stdin
APPROACH: if the size of the second string is less than or equal to the first string, then output 'go' else 'no'
*/

#include <iostream>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    if (s2.size() <= s1.size()) {
        cout << "go" << endl;
    } else {
        cout << "no" << endl;
    }
}
