// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=713

#include <bits/stdc++.h>
using namespace std;

int main() {
	ifstream fin("cowqueue.in");
	ofstream fout("cowqueue.out");
	int n; fin >> n;
	vector<pair<int, int>> v(n); for (pair<int, int> &i: v) fin >> i.first >> i.second;
	sort(v.begin(), v.end());
	int t = 0;
	for (pair<int, int> &i: v) {
		i.first = max(i.first, t);
		t = i.first + i.second;
	}
	fout << t << '\n';
	return 0;
}
