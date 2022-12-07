// CodeChef Problem Link: https://www.codechef.com/START68D/problems/BORSTR

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    string str;
	    cin >> str;
	    map<pair<char, int>, int> m;
	    char c = str[0]; int l = 1;
	    m[{c, l}]++;
	    for (int i = 1; i < n; ++i) {
	        if (c != str[i]) {
	            l = 1;
	            c = str[i];
	        } else {
	            l++;
	        }
	        m[{c, l}]++;
	    }
	    int mx = 0;
	    for (auto &it: m) {
	        if (it.second == 1) {
	            mx = max(mx, it.first.second - 1);
	            continue;
	        }
	        mx = max(mx, it.first.second);
	    }
	    cout << mx << "\n";
	}
	return 0;
}
