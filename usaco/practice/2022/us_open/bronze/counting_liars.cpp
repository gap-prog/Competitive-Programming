// USACO Problem Link: http://usaco.org/index.php?page=viewproblem2&cpid=1228

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    pair<char, int> cows[n];
    for (int i = 0; i < n; ++i) {
        cin >> cows[i].first >> cows[i].second;
    }
    int m = n;
    for (int i = 0; i < n; ++i) {
        int l = 0;
        for (int j = 0; j < n; ++j) {
            if ((cows[j].first == 'L' && cows[i].second > cows[j].second) || (cows[j].first == 'G' && cows[i].second < cows[j].second)) {
                l++;
            }
        }
        m = min(m, l);
    }
    cout << m << endl;
}
