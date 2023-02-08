// HackerRank Problem Link: https://www.hackerrank.com/challenges/sum-numbers-c/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    float f1, f2;
    scanf("%d %d", &n1, &n2);
    scanf("%f %f", &f1, &f2);
    printf("%d %d\n%.1f %.1f", n1 + n2, n1 - n2, f1 + f2, f1 - f2);
    return 0;
}
