// HackerEarth Problem Link: https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/special-number-9-a0cda359/

#include <bits/stdc++.h>
using namespace std;

int sum(int n) {
	int total = 0;
	while (n > 0) {
		total += n % 10;
		n /= 10;
	}
	return total;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		while (sum(n) % 4 != 0) {
			n++;
		}
		cout << n << endl;
	}
	return 0;
}
