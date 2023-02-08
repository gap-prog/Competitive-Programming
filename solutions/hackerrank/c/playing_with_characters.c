#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100];
    char sen[100];
    scanf("%c%*c", &ch);
    scanf("%s%*c", s);
    scanf("%[^\n]%*c", sen);
    printf("%c\n%s\n%s", ch, s, sen);
    return 0;
}
