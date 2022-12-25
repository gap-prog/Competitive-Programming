// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=712

#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("circlecross.in", "r", stdin);
	freopen("circlecross.out", "w", stdout);
	string alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string cross;
	cin >> cross;
	vector<pair<char, char>> v;
	int count = 0;
	for (int i = 0; i < 26; ++i) {
		for (int j = 0; j < 26; ++j) {
			if (i != j) {
				short check = 0;
				for (int k = 0; k < v.size(); ++k) {
					if ((cross[i] == v[k].first || cross[i] == v[k].second) && (cross[j] == v[k].first || cross[j] == v[j].second)) {
						check = 1;
						break;
					}
				}
				if (check == 0) {
					int l1f1 = cross.find(alphabets[i]);
					int l1f2 = cross.find(alphabets[i], l1f1 + 1);
					int l2f1 = cross.find(alphabets[j]);
					int l2f2 = cross.find(alphabets[j], l2f1 + 1);
					if (l1f1 < l2f1 && l2f1 < l1f2 && l1f2 < l2f2) {
						count++;
					}
				}
			}
		}
	}
	cout << count << endl;
}
