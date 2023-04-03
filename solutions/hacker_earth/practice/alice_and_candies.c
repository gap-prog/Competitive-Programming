// HackerEarth Problem Link: https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/lola-and-candies-36b57b1b/

#include <stdio.h>
#include <math.h>

int main()
{
	long long int n;
	scanf("%lld", &n);
	int num = sqrt(n), p = 1, res = 0;
	while (num--)
	{
		if ((n + p * p) % (p * 2) == 0)
		{
			res++;
		}
		p++;
	}
	printf("%d", res);
	return 0;
}
