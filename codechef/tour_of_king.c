// CodeChef Problem Link: https://www.codechef.com/problems/KNGTOR

#include <stdio.h>

int main(void) {
	int n;
	scanf("%d\n", &n);
	while (n--) {
	    int num1, num2;
	    scanf("%d%d\n", &num1, &num2);
	    printf("%d\n", num1 * 5 + num2 * 7);
	}
	return 0;
}
