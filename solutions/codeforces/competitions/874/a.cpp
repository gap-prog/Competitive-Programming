// CodeForces Problem Link: https://codeforces.com/contest/1833/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        set<pair<char, char>> st;
        for (int i = 0; i < n - 1; ++i) st.insert({s[i], s[i + 1]});
		cout << st.size() << '\n';
    }
	return 0;
}
