// HackerRank Problem Link: https://www.hackerrank.com/challenges/c-tutorial-strings/problem

#include <string>
#include <iostream>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    cout << a.length() << " " << b.length() << endl;
    cout << a + b << endl;
    char tmp = a[0];
    a[0] = b[0];
    b[0] = tmp;
    cout << a << " " << b;
    return 0;
}
