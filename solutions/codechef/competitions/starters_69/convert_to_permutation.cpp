// CodeChef Problem Link: https://www.codechef.com/problems/PERMUTATION

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    vector<int> v(n);
	    for (int i = 0; i < n; ++i) {
	        cin >> v[i];
	    }
	    int mo = 0;
	    sort(v.begin(), v.end());
	    for (int i = 0; i < n; ++i) {
	        if (v[i] > i + 1) {
	            mo = -1;
	            break;
	        } else {
	            mo += ((i + 1) - v[i]);
	        }
	    }
	    cout << mo << endl;
	}
	return 0;
}
