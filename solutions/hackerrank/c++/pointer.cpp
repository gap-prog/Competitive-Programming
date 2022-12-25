// HackerRank Problem: https://www.hackerrank.com/challenges/c-tutorial-pointer/problem

#include <stdio.h>

void update(int *a, int *b) {
	int x = *a, y = *b;
	*a = x + y;
	*b = x - y > 0 ? x - y : -(x - y);
}

int main() {
	int a, b;
	int *pa = &a, *pb = &b;
	scanf("%d %d", &a, &b);
	update(pa, pb);
	printf("%d\n%d", a, b);
	return 0;
}
