// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=760

#include <iostream>
#include <vector>
using namespace std;

int main() {
	freopen("shuffle.in", "r", stdin);
	freopen("shuffle.out", "w", stdout);
	int n;
	cin >> n;
	vector<int> a;
	for (int i = 0; i < n; i++) {
		int p;
		cin >> p;
		a.push_back(p - 1);
	}
	vector<int> id;
	for (int i = 0; i < n; i++) {
		int cid;
		cin >> cid;
		id.push_back(cid);
	}
	vector<int> num(n, 0);
	for (int i = 0; i < n; i++) {
		num[i] = i;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			num[i] = a[num[i]];
		}
	}
	vector<int> f(n, 0);
	for (int i = 0; i < n; i++) {
		f[i] = id[num[i]];
	}
	for (int i = 0; i < n; i++) {
		cout << f[i] << endl;
	}
}
