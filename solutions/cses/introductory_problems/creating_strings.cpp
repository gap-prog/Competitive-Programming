// CSES Problem Link: https://cses.fi/problemset/result/5945669/

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	sort(begin(s), end(s));
	set<string> st;
	do {
		st.insert(s);
	} while (next_permutation(begin(s), end(s)));
	cout << (int) st.size() << '\n';
	for (const string &i: st) cout << i << '\n';
	return 0;
}
