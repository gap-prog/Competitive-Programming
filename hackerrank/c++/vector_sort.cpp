// HackerRank Problem Link: https://www.hackerrank.com/challenges/vector-sort/problem

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int n;
        cin >> n;
        arr.push_back(n);
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
