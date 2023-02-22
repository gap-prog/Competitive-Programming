// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=687

#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("notlast.in", "r", stdin);
	freopen("notlast.out", "w", stdout);
	int n;
	cin >> n;
	vector<int> v(n);
	map<string, int> m;
	m = {
		{"Bessie", 0},
		{"Elsie", 0},
		{"Daisy", 0},
		{"Gertie", 0},
		{"Annabelle", 0},
		{"Maggie", 0},
		{"Henrietta", 0},
	};
	while (n--) {
		string cow;
		int milk;
		cin >> cow >> milk;
		m[cow] += milk;
	}
	int minimum = INT_MAX;
	for (auto &i: m) {
		if (i.second < minimum) {
			minimum = i.second;
		}
	}
	int second_minimum = INT_MAX;
	for (auto &i: m) {
		if (i.second > minimum && i.second < second_minimum) {
			second_minimum = i.second;
		}
	}
	string ans = "";
	int count = 0;
	for (auto &i: m) {
		if (i.second == second_minimum) {
			count++;
			ans = i.first;
		}
	}
	if (count == 1) {
		cout << ans << endl;
	} else {
		cout << "Tie";
	}
	return 0;
}
