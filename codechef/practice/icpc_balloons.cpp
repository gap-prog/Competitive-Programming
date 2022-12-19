// CodeChef Problem Link: https://www.codechef.com/problems/BALLOON

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    int arr[n];
	    for (int i = 0; i < n; ++i) {
	        cin >> arr[i];
	    }
	    int k = 0;
	    for (int i = 0; i < n; ++i) {
	        if (arr[i] == 1 || arr[i] == 2 || arr[i] == 3 || arr[i] == 4 || arr[i] == 5 || arr[i] == 6 || arr[i] == 7) {
	            k = i + 1;
	        }
	    }
	    cout << k << endl;
	}
	return 0;
}
