#include <bits/stdc++.h>
using namespace std;

int main() {
	ifstream fin("cowsignal.in");
	ofstream fout("cowsignal.out");
	int m, n, k; fin >> m >> n >> k;
	while (m--) {
		string s; fin >> s;
		for (int i = 0; i < k; ++i) {
			for (int j = 0; j < n; ++j) fout << string(k, s[j]);
			fout << '\n';
		}
	}
	return 0;
}
