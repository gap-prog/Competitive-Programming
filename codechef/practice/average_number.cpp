// CodeChef Problem Link: https://www.codechef.com/problems/AVG

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n, k, v, sum = 0;
	    cin >> n >> k >> v;
	    for (int i = 0; i < n; ++i) {
	        int num;
	        cin >> num;
	        sum += num;
	    }
	    int x = (v * (n + k)) - sum;
	    cout << ((x > 0 && x % k == 0) ? x / k : -1) << endl;
	}
	return 0;
}
