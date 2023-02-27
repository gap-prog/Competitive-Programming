// USACO Training Pages Problem Link: https://train.usaco.org/usacoprob2?a=hY1Daw41wnB&S=milk2

#include <bits/stdc++.h>
using namespace std;

int arr[(int) 10e5];

int main() {
    freopen("milk2.in", "r", stdin);
    freopen("milk2.out", "w", stdout);
    int n, lowest = INT_MAX, highest = -1;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int start, end;
        cin >> start >> end;
        for (int j = start; j < end; ++j) {
            arr[j] = 1;
        }
        lowest = min(lowest, start);
        highest = max(highest, end);
    }
    int milking = 0, idle = 0, tmp_milking = 0, tmp_idle = 0;
    for (int i = lowest; i < highest; ++i) {
        if (arr[i] == 1) {
            idle = max(idle, tmp_idle);
            tmp_idle = 0;
            tmp_milking++;
        } else {
            milking = max(milking, tmp_milking);
            tmp_milking = 0;
            tmp_idle++;
        }
    }
    milking = max(milking, tmp_milking);
    idle = max(idle, tmp_idle);
    if (n == 1) {
        idle = 0;
    }
    cout << milking << " " << idle << endl;
    return 0;
}
