// HackerRank Problem Link: https://www.hackerrank.com/challenges/30-running-time-and-complexity/problem

#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if (n == 1) {
            cout << "Not prime" << endl;
        }
        else if (n == 2) {
            cout << "Prime" << endl;
        }
        else {
            for(int j = 2; j <= sqrt(n); j++) {
                if (n % j == 0) {
                    cout << "Not prime" << endl;
                    break;
                }
                if (j + 1 > sqrt(n)) {
                    cout << "Prime" << endl;
                }
            }
        }
    }
    return 0;
}
