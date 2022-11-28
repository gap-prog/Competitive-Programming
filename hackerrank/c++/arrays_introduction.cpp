// HackerRank Problem Link: https://www.hackerrank.com/challenges/arrays-introduction/problem

#include <vector>
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int A[n];
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	for (int j = n - 1; j >= 0; j--) {
		cout << A[j] << " ";
	}
	cout << endl;
}
