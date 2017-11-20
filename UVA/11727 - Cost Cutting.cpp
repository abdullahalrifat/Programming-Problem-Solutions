#include<stdio.h>
int main()
{
	int n,i,a,b,c;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf_s("%d %d %d", &a, &b, &c);
		if ((a > b&&a < c) || (a > c&&a < b))
		{
			printf("Case %d: %d\n", i, a);
		}
		else if ((b > a&&b < c) || (b < a&&b > c))
		{
			printf("Case %d: %d\n", i, b);
		}
		else if ((c > a&&c < b) || (c < a&&c > b))
		{
			printf("Case %d: %d\n", i, c);
		}
		else if (a == b)
		{
			printf("Case %d: %d\n", i, a);
		}
		else if (b == c)
		{
			printf("Case %d: %d\n", i, b);
		}
		else if (a == c)
		{
			printf("Case %d: %d\n", i, a);
		}
	}
	return 0;
}