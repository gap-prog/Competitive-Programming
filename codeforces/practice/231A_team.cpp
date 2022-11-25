// CodeForces Problem Link: https://codeforces.com/problemset/problem/231/A

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int s = 0;
	for (int i = 0; i < n; i++) {
		int p, v, t;
		cin >> p >> v >> t;
		if (p + v + t >= 2) {
			s++;
		}
	}
	cout << s << endl;
}

