// HackerRank Problem Link: https://www.hackerrank.com/challenges/cpp-lower-bound/problem

#include <iostream>
using namespace std;

int main() {
    int n, q, num;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];  
    }
    cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> num;
        auto it = lower_bound(arr, arr + n, num) - arr;
        auto it1 = lower_bound(arr, arr + n, num);
        if (*it1 == num) {
            cout << "Yes " << it + 1 << endl;
        } else {
            cout << "No " << it + 1 << endl;
        }
    }
    return 0;
}
