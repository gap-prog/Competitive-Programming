// USACO Training Problem Link: https://train.usaco.org/usacoprob2?a=6gTcQ5dfibn&S=beads

/*
ID:
TASK: beads
LANG: C++
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("beads.in", "r", stdin);
	freopen("beads.out", "w", stdout);
	int n, ans;
	string necklace;
	cin >> n >> necklace;
	necklace += necklace;
	for(int i = 0; i < n; ++i) {
		char bead = necklace[i];
		int c = 0;
		int j = i;
		for(int k = bead != 'w'; k <= 2; ++k) {
			for(; j < n + i && (necklace[j] == bead || necklace[j] == 'w'); ++j) {
				c++;
			}
			bead = necklace[j];
		}
		ans = max(ans, c);
	}
	cout << ans << endl;
}
