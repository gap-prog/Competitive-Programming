// HackerRank Problem Link: https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem?isFullScreen=true

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int a; long b; char c; float d; double e;
	scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
	printf("%d\n%ld\n%c\n%.3f\n%.9lf", a, b, c, d, e);
	return 0;
}
