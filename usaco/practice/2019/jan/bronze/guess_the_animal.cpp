// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=893

#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("guess.in", "r", stdin);
	freopen("guess.out", "w", stdout);
	int n;
	cin >> n;
	vector<set<string>> v(n);
	for (int i = 0; i < n; ++i) {
	    string animal;
	    int k;
	    cin >> animal >> k;
	    for (int j = 0; j < k; ++j) {
	        string c;
	        cin >> c;
	        v[i].insert(c);
	    }
	}
	int num_common = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			set<string> intersect;
			set_intersection(v[i].begin(), v[i].end(), v[j].begin(), v[j].end(), std::inserter(intersect, intersect.begin()));
			if (intersect.size() > num_common) {
				num_common = intersect.size();
			}
		}
	}
	cout << num_common + 1 << endl;
}
