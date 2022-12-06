// CodeChef Problem Link: https://www.codechef.com/problems/BIRYANI

#include <stdio.h>

int main(void) {
	int n;
	scanf("%d\n", &n);
	while (n--) {
	    int x, y;
	    scanf("%d%d\n", &x, &y);
	    printf("%d\n", x * y);
	}
	return 0;
}
