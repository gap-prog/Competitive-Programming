#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int k, n , w;
	cin >> k >> n >> w;
	int c = 0;
	for (int i = 1; i <= w; i++) {
		c += k * i;
	}
	if (n >= c) {
		cout << 0 << endl;
	} else {
		cout << c - n << endl;
	}
}
