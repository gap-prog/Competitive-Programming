// HackerRank Problem Link: https://www.hackerrank.com/challenges/variable-sized-arrays/problem

#include <vector>
#include <iostream>
using namespace std;

int main() {
	int n, q, s, v, w, ix;
	cin >> n >> q;
	vector< vector<int> > V;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		vector<int> iv;
		for (int j = 0; j < s; ++j) {
			cin >> v;
			iv.push_back(v);
		}
		V.push_back(iv);
	}
	for (int i = 0; i < q; ++i) {
		cin >> w >> ix;
		cout << V[w][ix] << endl;
	}
	return 0;
}
