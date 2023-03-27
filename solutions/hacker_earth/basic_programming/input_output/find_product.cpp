// HackerEarth Problem Link: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-product/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, mod = 1e9+7;
	cin >> n;
	long long int prod = 1;
	for (int i = 0; i < n; ++i) {
		int num;
		cin >> num;
		prod = (prod * num) % mod;
	}
	cout << prod << endl;
}
