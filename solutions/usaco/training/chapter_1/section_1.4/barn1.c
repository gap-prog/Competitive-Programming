// USACO Training Pages Problem Link: https://train.usaco.org/usacogate?a=lNO440aZS3v

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int stalls[200];

int cmp(const void *n1, const void *n2)
{
    return *(int*)n2 - *(int*)n1;
}

void main(void)
{
    FILE *fin, *fout;
    fin = fopen("barn1.in", "r");
    fout = fopen("barn1.out", "w");
    assert(fin != NULL && fout != NULL);
    int ans, m, s, c, i, j, cow, mn, mx, nr, run[200];
    fscanf(fin, "%d %d %d", &m, &s, &c);
    for (i = 0; i < c; ++i)
    {
        fscanf(fin, "%d", &cow);
        stalls[cow - 1] = 1;
    }
    ans = 0;
    for (i = 0; i < s && !stalls[i]; ++i) ans++;
    mn = i;
    for (i = s - 1; i >= 0 && !stalls[i]; --i) ans++;
    mx = i + 1;
    nr = 0;
    i = mn;
    while (i < mx)
    {
        while (stalls[i] && i < mx) ++i;
        for (j = i; j < mx && !stalls[j]; ++j);
        run[nr++] = j - i;
        i = j;
    }
    qsort(run, nr, sizeof(run[0]), cmp);
    for (i = 0; i < nr && i < m - 1; ++i) ans += run[i];
    fprintf(fout, "%d\n", s - ans);
    return 0;
}