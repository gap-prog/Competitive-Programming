// CodeChef Problem Link: https://www.codechef.com/LP0TO101/problems/FLOW010

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d\n", &n);
    while(n--) {
        char id;
        scanf("%c\n", &id);
        if (id == 'B' || id == 'b') {
            printf("BattleShip\n");
        } else if (id == 'C' || id == 'c') {
            printf("Cruiser\n");
        } else if (id == 'D' || id == 'd') {
            printf("Destroyer\n");
        } else {
            printf("Frigate\n");
        }
    }
	return 0;
}
