// CodeChef Problem Link: https://www.codechef.com/problems/CHEFSCORE

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n, x, y, valid = 0;
	    cin >> n >> x >> y;
	    if (y == 0) {
	        cout << "YES" << endl;
	    } else {
	        int score = 0;
	        for (int i = 1; i <= n; ++i) {
	            score = x * i;
	            if (score == y) {
	                valid = 1;
	                break;
	            }
	        }
	        if (valid == 1) {
	            cout << "YES" << endl;
	        } else {
	            cout << "NO" << endl;
	        }
	    }
	}
	return 0;
}
