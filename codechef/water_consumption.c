// CodeChef Problem Link: https://www.codechef.com/problems/WATERCONS

#include <stdio.h>

int main(void) {
	int n;
	scanf("%d\n", &n);
	while (n--) {
	    int ml;
	    scanf("%d\n", &ml);
	    if (ml >= 2000) {
	        printf("YES\n");
	    } else {
	        printf("NO\n");
	    }
	}
	return 0;
}
