// HackerRank Problem Link: https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	string num_wrd[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	for (int i = a; i <= b; i++) {
		if (i > 9) {
			if (i % 2 == 0) {
				cout << "even" << endl;
			} else {
				cout << "odd" << endl;
			}
		} else if (i >= 1 && i <= 9) {
			cout << num_wrd[i - 1] << endl;
		}
	}
	return 0;
}
