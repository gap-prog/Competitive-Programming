// USACO Training Problem Link: https://train.usaco.org/usacoprob2?a=6gTcQ5dfibn&S=palsquare

#include <bits/stdc++.h>
using namespace std;

string toBase(int num, int base) {
	const string nums = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string result = "";
	while(num > 0) {
		int mod = num % base;
		result += nums[mod];
		num = (num - mod) / base;
	}
	reverse(result.rbegin(), result.rend());
	return result;
}

int main() {
	freopen("palsquare.in", "r", stdin);
	freopen("palsquare.out", "w", stdout);
	int b, square;
	cin >> b;
	for (int i = 1; i <= 300; ++i) {
		square = i * i;
		string convertedSquare = toBase(square, b);
		string currentNumber = toBase(i, b);
		string reversed(convertedSquare.rbegin(), convertedSquare.rend());
		if (reversed == convertedSquare) {
			cout << currentNumber << " " << convertedSquare << endl;
		}
	}
}
