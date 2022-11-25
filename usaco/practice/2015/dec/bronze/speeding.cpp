#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
	freopen("speeding.in", "r", stdin);
	freopen("speeding.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	vector<int> sl;
	vector<int> s;
	for (int i = 0; i < n; i++) {
		int seg, spl;
		cin >> seg >> spl;
		for (int j = 0; j < seg; j++) {
			sl.push_back(spl);
		}
	}
	for (int i = 0; i < m; i++) {
		int seg, spl;
		cin >> seg >> spl;
		for (int j = 0; j < seg; j++) {
			s.push_back(spl);
		}
	}
	int mi = 0;
	for (int i = 0; i < 100; i++) {
		if ((s[i] > sl[i]) && ((s[i] - sl[i]) > mi)) {
			mi = s[i] - sl[i];
		}
	}
	cout << mi << endl;
}
