// HackerRank Problem Link: https://www.hackerrank.com/challenges/cpp-maps/problem

#include <map>
#include <iostream>
using namespace std;

int main() {
	int q;
	cin >> q;
	map<string, int> m;
	while(q--) {
		int qt;
		string x;
		cin >> qt >> x;
		if (qt == 1) {
			int y;
			cin >> y;
			m[x] += y;
		} else if (qt == 2) {
			m.erase(x);
		} else {
			cout << m[x] << endl;
		}
	}
	return 0;
}
