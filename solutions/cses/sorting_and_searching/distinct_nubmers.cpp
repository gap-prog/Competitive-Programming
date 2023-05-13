// CSES Problem Link: https://cses.fi/problemset/result/6058434/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	int n;
	cin >> n;
	set<ll> s;
	for (int i = 0; i < n; ++i) {
		ll x;
		cin >> x;
		s.insert(x);
	}
	cout << s.size() << endl;
	return 0;
}
