// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=639

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);
	int n, k;
	cin >> n >> k;
	vector<int> arr(n);
	for (int i = 0; i < n; ++i) {
	    cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int count = 1;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] - arr[i] <= k) {
                count++;
            } else {
                break;
            }
        }
        ans = max(ans, count);
    }
    cout << ans << endl;
}
