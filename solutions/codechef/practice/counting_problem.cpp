// CodeChef Problem Link: https://www.codechef.com/problems/COUNTP

#include <vector>
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    vector<int> v(n);
	    for (int i = 0; i < n; ++i) {
	        cin >> v[i];
	    }
	    int odd = 0;
	    for (int i = 0; i < n; ++i) {
	        if (v[i] % 2 != 0) {
	            odd++;
	        }
	    }
	    if (odd % 2 == 0 && odd != 0) {
	        cout << "YES" << endl;
	    } else {
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
