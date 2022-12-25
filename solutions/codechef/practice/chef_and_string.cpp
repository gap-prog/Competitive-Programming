// CodeChef Problem Link: https://www.codechef.com/problems/RECNDSTR

#include <iostream>
using namespace std;

string lShift(string s) {
    return s.substr(1, s.length() - 1) + s.substr(0,1);
}

string rShift(string s) {
    return s.back() + s.substr(0, s.length() - 1);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << ((lShift(s) == rShift(s)) ? "YES" : "NO") << endl;
    }
}
