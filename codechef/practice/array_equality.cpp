// CodeChef Problem Link: https://www.codechef.com/problems/ARREQU

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    long long int arr[n];
	    for (int i = 0; i < n; ++i) {
	        cin >> arr[i];
	    }
	    arr[n] = -1;
	    sort(arr, arr + n);
	    int ct = 1, m = 1;
	    for (int i = 0; i < n; ++i) {
	        if (arr[i] == arr[i + 1]) {
	            ct++;
	            if (ct > m) {
	                m = ct;
	            }
	        } else {
	            ct = 1;
	        }
	    }
	    if (m > (n + 1) / 2) {
	        cout << "No" << endl;
	    } else {
	        cout << "Yes" << endl;
	    }
	}
	return 0;
}
