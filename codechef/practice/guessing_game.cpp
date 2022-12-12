// CodeChef Problem Link: https://www.codechef.com/LP2TO308/problems/GUESS

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    long n, m;
	    cin >> n >> m;
	    long all = n * m;
	    if (n == 1 && m == 1) {
	        cout << "0/1" << endl;
	    } else if (n % 2 == 0 || m % 2 == 0) {
	        cout << "1/2" << endl;
	    } else {
	        long odd = all / 2;
	        cout << odd << "/" << all << endl;
	    }
	}
	return 0;
}
