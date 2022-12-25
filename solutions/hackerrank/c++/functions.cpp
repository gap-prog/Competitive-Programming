// HackerRank Problem Link: https://www.hackerrank.com/challenges/c-tutorial-functions/problem

#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int n1, int n2, int n3, int n4) {
	return max(n1, max(n2, max(n3, n4)));
}

int main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int ans = max_of_four(a, b, c, d);
	printf("%d", ans);
	return 0;
}
