// HackerRank Problem Link: https://www.hackerrank.com/challenges/cpp-sets/problem

#include <set>
#include <iostream>
using namespace std;

int main() {
	int q;
	cin >> q;
	set<int> s;
	while(q--) {
		int y, x;
		cin >> y >> x;
		if (y == 1) {
			s.insert(x);
		} else if (y == 2) {
			s.erase(x);
		} else {
			set<int>::iterator it = s.find(x);
			if (it != s.end()) {
				cout << "Yes" << endl;
			} else {
				cout << "No" << endl;
			}
		}
	}
	return 0;
}
